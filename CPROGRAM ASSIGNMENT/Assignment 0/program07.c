//7. Write a C program to convert given minutes into hours and remaining minutes.
#include<stdio.h>
void main (){
	int minute = 160,remaining_munutes, hour = 60;
	      
	hour = minute/hour;
	remaining_munutes = minute % 60;
	printf("Minute convert into hour %d remaining minute is  %d", hour,remaining_munutes );
}