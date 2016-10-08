#include <stdio.h>

#define LINE 20

int main()
{
	int i,j;
	for(i=0; i<=LINE; i++) {
		if(i<=(LINE/2)) {
			for(j=0;j<=LINE-i;j++) {
				printf(" ");
			}
			for(j=0;j<i*2+1;j++) {
				printf("*");
			}
		} else {
			for(j=0;j<=i;j++) {
				printf(" ");
			}
			for(j=0;j<(LINE-i)*2+1;j++) {
				printf("*");
			}
		}
		printf("\n");
	}        
	return 0;
}
