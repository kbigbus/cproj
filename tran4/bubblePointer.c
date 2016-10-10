#include <stdio.h>

int main()
{
	int arr[10] = {1,3,5,2,7,6,9,0,4,8};
	int* p = NULL;
	int* q = NULL;
	int t;
	for(p=arr;p-arr<10;p++) {
		for(q=p+1;q-arr<10;q++) {
			if(*p > *q) {
				t = *p;
				*p = *q;
				*q = t;
			}	
		}
	}
	for(t=0;t<10;t++) {
		printf("%d ", arr[t]);
	}
	printf("\n");
	return 0;
}
