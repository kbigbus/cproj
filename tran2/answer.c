#include <stdio.h>

#define TOTAL 100

int main()
{
	int x,y,z;
	printf("the answer is:\n");
	for(x=0;x<=100;x++) {
		for(y=0;y<=100;y++) {
			for(z=0;z<=100;z++) {
				if(x+2*y+3*z==100) {
					printf("x=%d, y=%d, z=%d\n", x, y, z);
				}
			}
		}
	}	
	return 0;
}
