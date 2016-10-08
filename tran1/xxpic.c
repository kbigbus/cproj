#include <stdio.h>

#define LINE 20

int main()
{
	int i,j,n;
	for(i=0; i<=LINE; i++) {
		if(i<=(LINE/2)) {
			n = i;
		} else {
			n = LINE - i;
		}
		for(j=0;j<=LINE-n;j++) {
			printf(" ");
		}
		for(j=0;j<n*2+1;j++) {
			printf("*");
		}
		printf("\n");
	}        
	return 0;
}
