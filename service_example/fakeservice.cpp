#include <stdio.h>
#include <lunaservice.h>
#include <glib.h>
#include <json.h>

bool init(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("init");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool close(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("close");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}

bool flush(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("flush");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}

bool clean(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("clean");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}

bool setConfig(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("setConfig");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool find(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("find");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool findLian(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("findLian");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool getStr(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("getStr");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool getList(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("getList");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool getListStr(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("getListStr");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool getShow(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("getShow");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool getMatchInfo(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("getMatchInfo");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool setShuangpin(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("setShuangpin");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool setMohu(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("setMohu");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool hsStart(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("hsStart");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool hsEnd(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("hsEnd");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool hsRecognize(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("hsRecognize");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool getCandList(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("getCandList");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool getListCandList(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("getListCandList");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool saveShuangpin(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("saveShuangpin");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}

bool getShuangpin(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("getShuangpin");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}

bool loadPhrase(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("loadPhrase");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool phraseEdit(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("phraseEdit");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool phraseGPEdit(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("phraseGPEdit");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool phraseFind(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("phraseFind");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool phraseGetInfo(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("phraseGetInfo");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool phraseGetGPInfo(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("phraseGetGPInfo");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool phraseGetGPCount(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("phraseGetGPCount");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool phraseGetGPInfoList(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("phraseGetGPInfoList");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}

bool phraseGetInfoList(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("phraseGetInfoList");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool pullCn(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("pullCn");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool pullEn(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("pullEn");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool exportUsWords(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("exportUsWords");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool importUsWords(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("importUsWords");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool cellInstall(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("cellInstall");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool resetLib(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("resetLib");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool getCoreInfo(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("getCoreInfo");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool getLibVer(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("getLibVer");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool getSysLibVer(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("getSysLibVer");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}
bool update(LSHandle *handle, LSMessage *msg, void *ctx)
{
	puts("update");
	LSMessageRespond(msg, "{\"returnValue\": true}", NULL);
	return true;
}

static LSMethod methods[] =
{
	{"init", init},
	{"close", close},
	{"flush", flush},
	{"clean", clean},
	{"setConfig", setConfig},
	{"find", find},
	{"findLian", findLian},
	{"getStr", getStr},
	{"getList", getList},
	{"getListStr", getListStr},
	{"getShow", getShow},
	{"getMatchInfo", getMatchInfo},
	{"setShuangpin", setShuangpin},
	{"setMohu", setMohu},
	{"hsStart", hsStart},
	{"hsEnd", hsEnd},
	{"hsRecognize", hsRecognize},
	{"getCandList", getCandList},
	{"getListCandList", getListCandList},
	{"saveShuangpin", saveShuangpin},
	{"getShuangpin", getShuangpin},
	{"loadPhrae", loadPhrase},
	{"phraseEdit", phraseEdit},
	{"phraseGPEdit", phraseGPEdit},
	{"phraseFind", phraseFind},
	{"phraseGetInfo", phraseGetInfo},
	{"phraseGetGPInfo", phraseGetGPInfo},
	{"phraseGetGPCount", phraseGetGPCount},
	{"phraseGetInfoList", phraseGetInfoList},
	{"phraseGetGPInfoList", phraseGetGPInfoList},
	{"pullCn", pullCn},
	{"pullEn", pullEn},
	{"exportUsWords", exportUsWords},
	{"importUsWords", importUsWords},
	{"cellInstall", cellInstall},
	{"resetLib", resetLib},
	{"getCoreInfo", getCoreInfo},
	{"getLibVer", getLibVer},
	{"getSysLibVer", getSysLibVer},
	{"update", update},
	{ 0, 0}
};

GMainLoop *loop;
LSPalmService *handle;
LSHandle *prv;
LSHandle *pub;

bool service_register(const char *name)
{
	bool rc;
	LSError err;
	LSErrorInit(&err);

	loop = g_main_loop_new(NULL, FALSE);

	if(loop == NULL)
		goto end;

	rc = LSRegisterPalmService(name, &handle, &err);
	if(rc)
	{
		pub = LSPalmServiceGetPublicConnection(handle);
		prv = LSPalmServiceGetPrivateConnection(handle);
	}
	else
		goto end;

	rc = LSPalmServiceRegisterCategory(handle, "/", methods, NULL, NULL,
					   NULL, &err);
	LSGmainAttachPalmService(handle, loop, &err);
	if(!rc)
		goto end;
end:
	if(LSErrorIsSet(&err))
	{
		LSErrorPrint(&err, stderr);
		LSErrorFree(&err);
		puts("servece startup error...");
	}
	return rc;
}

int main(int argc, char *argv[])
{
	service_register("com.baidu.ime");
	puts("init service....");
	g_main_loop_run(loop);
	return 0;
}
