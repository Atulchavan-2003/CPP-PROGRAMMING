//3. Write a program to find greatest of three numbers using nested if-else.
#include <stdio.h>
void main(){
	int a,b,c;
	printf("Enter the first number \n");
	scanf("%d",&a);
	
	printf("Enter the first number \n");
	scanf(" %d",&b);
	
	printf("Enter the first number \n");
	scanf(" %d",&c);
	
	if (a > b){
		if(a > c )
		 printf(" a is grater");
	}
	else if(b > c){
		printf(" b is grater");
	}
	else{
		printf("c is grater");
	}
}