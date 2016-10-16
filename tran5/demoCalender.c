#include <stdio.h>

char g_month[12][10] ={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"}; 

int g_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

//print the month
int printMonth(int month) 
{
	printf("%s", g_month[month-1]);
	return 0;
}

//judge the leap year
int isLeapYear(int year)
{
	if((year % 4 ==0 && year % 100 != 0) || (year % 400 ==0)) {
		return 1;
	} else {
		return 0;
	}
}

//get the week of the first day of the year
int getWeek(int year)
{
	return (35 + year + year/4 - year/100 + year /400) % 7;
}

//get the month days of the year
int getDays(int year, int month)
{
	if(month == 2 && isLeapYear(year)){
		return g_days[month-1] + 1;
	} else {
		return g_days[month-1];
	}
}

int main()
{
	int i, j, k, week, days;
	int year = 2016;
	
	week = getWeek(year);
	
	for(i=0; i<12; i++) {
		printf("\n");
		
		printMonth(i+1);
		printf("\n");
		printf("================================\n");
		printf("  S   M   T   W   T   F   S\n");

		for(k=0; k<week; k++) {
			printf("    ");	
		}
		
		days = getDays(year, i+1);
		for(j=1; j<=days; j++) {
			printf("%3d ", j);
			if(++week >= 7) {
				printf("\n");
				week = week % 7;
			}
		}
		printf("\n");
	}
	return 0;
}
