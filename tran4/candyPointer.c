#include <stdio.h>

int main()
{
	int arr[10] = {0};

	int* p = arr;
	int i;
	for(i=1;i<=99;i++){
		if((i%10)==1) {
			p = arr;
		} else {
			p++;
		}
		*p += i;
	}
	for(i=0;i<10;i++) {
		printf("the %d child\'s candy number:%d\n", i+1, arr[i]);
	}
	return 0;
}
