#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

/**
 * Get the date in the format
 * @param char* tmp    output string
 * @param string date_format  eg: %Y%m%d   %e   
 * @param time_t* timeAddress  the pointer of a time_t var
 * return int
 */
int getDateStr(char *tmp, char *date_format, time_t* timeAddress)
{
	strftime(tmp, sizeof(tmp), date_format, (struct tm *)gmtime(timeAddress));
	return 0;
}

//print  the calender in 2016  程序会输出2015年的 12月 31号出来  很是奇怪
int main()
{
	char* month[] = {"January", "February", "March", "April", "May", "June", "July", "Auguest", "September", "October", "November", "December"};
	char* week[] = {"S", "M", "T", "W", "T", "F", "S"};

	//get begin/end date unixstamp
	struct tm* tmp_time = (struct tm*)malloc(sizeof(struct tm));
	strptime("20160101", "%Y%m%d", tmp_time);
	
	time_t startDateSec;
	startDateSec = mktime(tmp_time);

	strptime("20170101", "%Y%m%d", tmp_time);
	time_t endDateSec;
	endDateSec = mktime(tmp_time);

	free(tmp_time);
	
	int i;
	int j=0;
	char tmps[10],starts[8],tmpweek[3],tmpdate[5];
	//init startdate string
	getDateStr(starts, "%Y%m", &startDateSec);

	while(startDateSec < endDateSec){
		
		getDateStr(tmps, "%Y%m", &startDateSec);
		//get the date in week
		getDateStr(tmpweek, "%w", &startDateSec);
		//transfer the date in month
		getDateStr(tmpdate, "%e", &startDateSec);

		if(strcmp(tmps,starts)>0) {
			//foreach print month week
			printf("\n\n   %s  %s\n", month[j], tmps);
			for(i=0;i<=6;i++) {
				printf("%2s ", week[i]);
			}
			printf("\n");
			//reset starts eq tmps
			strcpy(starts, tmps);

			//printf the first day of the month
			int tmpweekInt =  atoi(tmpweek);
			for(i=0;i<tmpweekInt;i++) {
				printf("   ");
			}
			
			printf("%2s ", tmpdate);
			if(strcmp(tmpweek, "6")==0) {
				printf("\n");
			}
			j++;
		} else {

			printf("%2s ", tmpdate);
			if(strcmp(tmpweek, "6")==0) {
				printf("\n");
			}
		}
		startDateSec += 86400;
	}
	
	printf("\n");
	return 0;
}


