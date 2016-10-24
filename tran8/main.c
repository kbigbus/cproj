#include <stdio.h>
#include "String.h"

int main()
{
	char a[] = "abcdefg";
	char b[] = "higklmn";
	String str, str1;
	
	StringInit(&str);
	
	StringSet(&str, a);
	printf("the chars of the String: %s\n", str.buf);

	//the same as str.buf
	printf("the address of the String: %d, %d\n", StringGetBuffer(&str), str.buf);

	StringCopy(&str1, &str);
	printf("the copy of the String: %s\n", str1.buf);

	StringAppend(&str, b);
	printf("the append of the String: %s\n", str.buf);
	
	printf("the length of the String: %d\n", str.len);
	return 0;
}
