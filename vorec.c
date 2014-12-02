#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <memory.h>
#include <unistd.h>
#include <pthread.h>

#include <sys/types.h>
#include <sys/ioctl.h>
#include <lunaservice.h>

#include "msm_audio.h"
#include "msm_audio_voicememo.h"

#define VODEV "/dev/msm_voicememo"


int sw = 0;

static void *vorec_main()
{
	int vfd, status, rfd;
	unsigned char *buf;
	struct msm_audio_voicememo_config cfg;
	char amrname[64];
	char dirname[64];
	char filename[64];
	char wavefile[256];
	time_t ltime;
	struct tm *tm;
	char hdr[] = { 0x23, 0x21, 0x41, 0x4d, 0x52, 0x0a};

	memset( &cfg, 0, sizeof(cfg));
	memset( amrname, 0, sizeof(amrname));
	memset( dirname, 0, sizeof(dirname));
	
	vfd = open( VODEV, O_RDWR);

	ltime = time(NULL);
	tm = localtime(&ltime);
	
	sprintf( amrname, "/tmp/%u.amr", ltime);

	rfd = open(amrname, O_RDWR|O_CREAT);

	buf = (unsigned char *)calloc( 1, 32);

	cfg.rec_type = RPC_VOC_REC_BOTH;
	cfg.rec_interval_ms = 00;
	cfg.auto_stop_ms = 0;
	cfg.capability = RPC_VOC_CAP_AMR;
	cfg.max_rate = RPC_VOC_AMR_RATE_1220;
	cfg.min_rate = RPC_VOC_AMR_RATE_1220;
	cfg.frame_format = RPC_VOC_PB_AMR;
	cfg.dtx_enable = 0;
	cfg.data_req_ms = 20;

	status = ioctl( vfd, AUDIO_SET_VOICEMEMO_CONFIG, &cfg);

	status = ioctl( vfd, AUDIO_GET_VOICEMEMO_CONFIG, &cfg);

	status = ioctl( vfd, AUDIO_START, 0);

	status = 0;
	write(rfd, hdr, sizeof(hdr));

	while(sw)
	{
		memset(buf, 0, 32);
		read( vfd, buf, 32);
		write( rfd, buf, 32);
	}
	sprintf( dirname, "/media/internal/record/%4d-%02d-%02d", 
			tm->tm_year+1900, tm->tm_mon+1, tm->tm_mday);
	mkdir(dirname, 0);
	snprintf( wavefile, sizeof(wavefile), "%s/%02d-%02d-%02d.wav",
			dirname, tm->tm_hour, tm->tm_min, tm->tm_sec);

	free(buf);
	close(rfd);
	close(vfd);

	decodec(amrname, wavefile);
	unlink(amrname);

	pthread_exit(NULL);
}


int rec_begin(void)
{
	pthread_t rec_pid;
	fprintf( stdout, "record startd...\n");
	mkdir("/media/internal/record", 0);

	if(sw)
		return 1;

	if( pthread_create( &rec_pid, NULL, vorec_main, NULL))
	{
		fprintf( stderr, "create recorder threads fail...\n");
		return 0;
	}
	sw = 1;
	return 1;
}

int rec_stop(void)
{
	sw = 0;
	fprintf( stdout, "recoder stoped..\n");

	return 1;
}

int rec_status(void)
{
	if(sw)
		return 1;
	return 0;
}
