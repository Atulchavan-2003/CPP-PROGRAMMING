#include<stdio.h>
void main (){
	int hh,min,sec;
	printf("Enter the hour");
	scanf("%d",&hh);
	printf("Enter the time");
	scanf("%d",&min);
	printf("Enter the second");
	scanf("%d",&sec);
	
	      int minute = hh * 60; 
	      int second = minute*60;
	        
	          second +=sec;
	          second += min*60;
	          printf("%d",second);
	
}