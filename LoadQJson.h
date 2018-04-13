#ifndef LoadQtAv_H
#define LoadQtAv_H
#define QTAVSDKPATH "3rdParty/QJson/"
	#include "parser.h"
	#include "serializer.h"
	#ifdef _DEBUG
	   #pragma comment(lib, QTAVSDKPATH"lib/qjsond.lib")
	#else
	   #pragma comment(lib, QTAVSDKPATH"lib/qjson.lib")
	#endif
#endif