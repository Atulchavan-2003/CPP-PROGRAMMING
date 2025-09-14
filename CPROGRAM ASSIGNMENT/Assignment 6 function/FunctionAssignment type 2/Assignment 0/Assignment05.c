// 05 write a program to check whether a person is eliginle to vote ( age >= 18).
#include <stdio.h>
int  agecalculate();
void main (){
	int a = agecalculate();
	if(a==1)
		printf(" eligible for votting");
	else	
		printf("not eligible for votting");
}
int  agecalculate(){
	int age;
	printf("Enter the number");
	scanf("%d",&age);
	if(age >= 18 ){
		return 1;
	}
	else 
		return 0;
	
}