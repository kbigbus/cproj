#include <stdio.h>

#define LINE 12

int main()
{
	int i,j;
	int arr[LINE][LINE] = { 0 };
	for(i=0;i<=LINE-1;i++){
		for(j=0;j<=LINE-i;j++) {
			printf("  ");
		}
		for(j=0;j<=i;j++){
			if(j==0 || j==i) {
				arr[i][j] = 1;
			} else {
				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
			}
			printf("%d  ", arr[i][j]);
		} 		
		printf("\n");
	}
	return 0;
}
