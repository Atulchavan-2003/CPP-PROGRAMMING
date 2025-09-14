//3. Write a program to find greatest of three numbers using nested if-else.
#include <stdio.h>
void greatest();
void main(){
	greatest();
}
void greatest(){
	int a,b,c;
	printf("Enter the first number \n");
	scanf("%d",&a);
	
	printf("Enter the first number \n");
	scanf(" %d",&b);
	
	printf("Enter the first number \n");
	scanf(" %d",&c);
	
	if (a > b){
		if(a > c )
		 printf(" a is greatest");
	}
	else if(b > c){
		printf(" b is greatest");
	}
	else{
		printf("c is greatest");
	}
}