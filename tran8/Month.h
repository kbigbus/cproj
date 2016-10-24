#ifndef MONTH_H_INCLUDED
#define MONTH_H_INCLUDED

#include "String.h"

typedef struct _tagMonth
{
	String _strName; //月份名称
	String _arrayDays[6]; //日期列表
	int _nArraySize; //日期列表的总行数
}Month;

int SetMonthName(Month* pMonth, char* pBuf);
int AddDaysLine(Month* pMonth, String* pStr);
char* GetMonthName(Month* pMonth);
int GetDaysArraySize(Month* pMonth);
int PrintMonth(Month* pMonth);
#endif
