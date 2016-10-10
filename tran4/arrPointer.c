#include <stdio.h>

int main()
{
	int a[5] = {1, 2, 3, 4};

	int * p = a;
	int i;
	for(i=0;i<5;i++) {
		printf("%d ", *(p+i));
	}
	printf("\n");
	for(i=0;i<5;i++) {
		printf("%d ", *p++);
	}
	printf("\n");
	return 0;
}
