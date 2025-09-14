// 03 write a program to check whether a given year is a leap year.
#include <stdio.h>
int leap_year_or_not(int );
void main (){
	int year;      // 2018
	printf("Enter the year \n");
	scanf("%d", &year);
    int b = leap_year_or_not(year);
	if(b==1)
		printf("leap year",year);             	
	else	
		printf(" not leap year");	 
	
		
}
int leap_year_or_not(int year){
		if(year % 4 == 0 && year % 100 == 0 || year % 400 == 0 )
			return 1;
		else 
			return 0;
}