/* 3.Write a C program to convert temperature from Celsius to Fahrenheit using the
formula:
F = (C *9/5) + 32*/
#include<stdio.h>
float celsius();
void main (){
	
   printf("%f",celsius());
	
}
float celsius(){
	 float F,C = 37;
	 printf("enter the celdius \n");
	 
	    F = (C *9/5) + 32;
			 
	   return F;
}