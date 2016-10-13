#ifndef STRING_H_INCLUDE
#define STRING_H_INCLUDE

#define BUF_SIZE 100

typedef struct _tagStr {
	char buf[BUF_SIZE];
	int len;
}String;

int StringInit(String* pStr);
int StringSet(String* pStr, char* pBuf);
char* StringGetBuffer(String* pStr);
int StringCopy(String* pDes, String* pSource);
int StringAppend(String* pStr, char* pBuf);

#endif
