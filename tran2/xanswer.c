#include <stdio.h>

#define TOTAL 100

int main()
{
	int x,y,z;
	printf("the answer is:\n");
	for(x=0;x<=TOTAL;x++) {
		for(y=0;y<=(TOTAL/2);y++) {
			for(z=0;z<=(TOTAL/3);z++) {
				if(x+2*y+3*z==TOTAL) {
					printf("x=%d, y=%d, z=%d\n", x, y, z);
				}
			}
		}
	}	
	return 0;
}
