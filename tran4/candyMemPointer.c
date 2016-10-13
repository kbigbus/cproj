#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int* pBuf = (int*)malloc(10 * sizeof(int));
	int* pCur = pBuf;
	int cnt = 0;

	memset(pBuf, 0, 10 * sizeof(int));
	for(cnt=1;cnt<=99;cnt++) {
		*pCur += cnt;
		pCur++;
		if(pCur - pBuf > 9) {
			pCur = pBuf;		
		}
	}
	for(cnt=0; cnt<10; cnt++) {
		printf("the %2d child's candy number:%d\n", cnt+1, pBuf[cnt]);
	}
	free(pBuf);
	return 0;
}
