#include <stdio.h>

int main()
{
	int arr[10] = {0};

	int i,n;
	for(i=0;i<99;i++){
		n = i%10;
		arr[n] += i+1; 
	}
	for(i=0;i<10;i++) {
		printf("the %d child\'s candy number:%d\n", i+1, arr[i]);
	}
	return 0;
}
