#include <stdio.h>
#include <pthread.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <memory.h>
#include <time.h>
#include <lunaservice.h>
#include "vorec.h"

GMainLoop *loop;
LSPalmService *handle;
LSHandle *prv_service;
LSHandle *pub_service;

bool begin( LSHandle *handle, LSMessage *msg, void *ctx)
{

	if(rec_begin())
	{
		LSMessageRespond( msg, "{\"returnValue\": true, \"Status\": true}", NULL);
		return true;
	}
	else
		LSMessageRespond( msg, "{\"returnValue\": true, \"Status\": false}", NULL);

	return false;
}

bool stop( LSHandle *handle, LSMessage *msg, void *ctx)
{
	if(rec_stop())
	{
		LSMessageRespond( msg, "{\"returnValue\": true, \"Status\": true}", NULL);
		return true;
	}
	else 
		LSMessageRespond( msg, "{\"rerurnValue\": true, \"Status\": false}", NULL);
	return false;
}

bool status( LSHandle *handle, LSMessage *msg, void *ctx)
{
	if(rec_status())
	{
		LSMessageRespond( msg, "{\"returnValue\": true, \"Status\": true}", NULL);
		return true;
	}
	else 
		LSMessageRespond( msg, "{\"rerurnValue\": true, \"Status\": false}", NULL);
	return true;
}

static LSMethod methods[] =
{
	{"recBegin", begin },
	{"recStop", stop},
	{"recStatus", status},
	{ 0, 0}
};

bool service_register( const char *name)
{
	bool rc;
	LSError error;
	LSErrorInit( &error);

	loop = g_main_loop_new(NULL, FALSE);
	if(loop == NULL)
		goto end;

	rc = LSRegisterPalmService(name, &handle, &error);

	if(rc)
	{
		pub_service = LSPalmServiceGetPublicConnection(handle);
		prv_service = LSPalmServiceGetPrivateConnection(handle);
	}
	else 
		goto end;

	rc =  LSPalmServiceRegisterCategory( handle, "/", methods, NULL, NULL,
			NULL, &error);
	LSGmainAttachPalmService( handle, loop, &error);


	if(!rc)
		goto end;
end:
	if(LSErrorIsSet(&error))
	{
		LSErrorPrint(&error, stderr);
		LSErrorFree(&error);
	}

	return rc;
}	

int main( int argc, char *argv[])
{
	mkdir( "/media/internal/record", 0);
	service_register("chomper.service.recorder");
	g_main_loop_run(loop);
}
