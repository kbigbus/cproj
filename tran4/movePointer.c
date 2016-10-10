#include <stdio.h>

int main()
{
	short a[5] = {1,2,3,4,5};
	
	short* p = a;
	long* pp = a;
	
	p++;
	pp++;
	
	printf("%d\n", *p);
	printf("%d\n", *(short*)pp);
	return 0;
}
