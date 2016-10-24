#include <stdio.h>
#include "String.h"

int StringInit(String* pStr) 
{
	pStr->buf[0] = 0; //the end of the string is 0
	pStr->len = 0;
	return 0;
}

int StringSet(String* pStr, char* pBuf)
{
	int i = 0;
	while(*pBuf != 0) {//judge the string is the end
		if(i>=100) {
			break;
		}
		
		pStr->buf[i++] = *pBuf++;
		pStr->len++;
	}
	pStr->buf[i] = 0;
	pStr->len = i;
	return 0;
}

char* StringGetBuffer(String* pStr) 
{
	return pStr->buf;
}

int StringCopy(String* pDes, String* pSource)
{
	//pDes = pSource;// this way maybe change the source , wrong way!!
	//return 0;
	return StringSet(pDes, pSource->buf);
}

int StringAppend(String* pStr, char* pBuf)
{
	int i = pStr->len;
	while(*pBuf != 0) {
		if(i>=100) {
			break;
		}
		pStr->buf[i++] = *pBuf++;
		pStr->len++;
	}
	pStr->buf[i] = 0;
	pStr->len = i;
	return 0;
}
