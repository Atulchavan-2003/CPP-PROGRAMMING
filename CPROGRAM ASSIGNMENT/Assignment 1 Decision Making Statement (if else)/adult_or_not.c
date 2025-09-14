// 05 write a program to check whether a person is eliginle to vote ( age >= 18).
#include <stdio.h>
void main (){
	int age;
	printf("Enter the number");
	scanf("%d",&age);
	if(age >= 18 ){
		printf("eligible for voting");
	}
	else 
	{
		printf("not eligible for votting");
	}
	
}