//10. Write a C program to input marks of five subjects, find the total marks, and calculate
//the percentage.
#include<stdio.h>
void main (){
	
	int marathi = 35, math = 35, hindi = 35, bhugol = 35,history = 40 ,sum ,percentage;
	
	sum = marathi + math + hindi + bhugol + history;
	
	percentage = sum / 5;
	printf("this is your result  %d  ",percentage);
	        
}