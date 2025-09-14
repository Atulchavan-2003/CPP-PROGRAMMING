// 03 write a program to check whether a given year is a leap year.
#include <stdio.h>
void main (){
	int year;      // 2018
	printf("Enter the year \n");
	scanf("%d", &year);
		
		if(year % 4 == 0 && year % 100 == 0 || year % 400 == 0 )
			printf("leap year",year);             	
		else 
			printf(" not leap year");	 
}