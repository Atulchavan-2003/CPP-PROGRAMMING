/*1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
desired operations.*/
#include <stdio.h>
int addi(int*,int*);
int sub(int*,int*);
int div(int*,int*);
int mult(int*,int*);
int mod(int*,int*);

void main (){

	char op;
	int no1,no2,total ;
	printf("Enter the firsr number\n");
	scanf("%d",&no1);
	
	printf("Enter second  number ");
	scanf(" %d",&no2);

	printf("enter the operator \n");
	fflush(stdin);
	scanf("%c",&op);


	if(op == '+') {
		addi(&no1,&no2); //function calling
	} else if(op == '-') {
		sub(&no1,&no2);
	} else if(op == '/') {
		div(&no1,&no2);
	} else if(op == '*') {
        mult(&no1,&no2);
	} else if(op == '%') {
		mod(&no1,&no2);
	} else {
		printf("incorrect operator");
	}
}//main end here

int addi(int* no1,int* no2) {
	int total = *no1+*no2;
		printf("%d",total);
}
int sub(int *no1,int *no2) {
	int total = *no1-*no2;
		printf("%d",total);
}
int div(int* no1,int* no2) {
	int total = *no1/ *no2;
		printf("%d",total);
}
int mult(int* no1,int* no2) {
	int total = *no1 * *no2;
		printf("%d",total);
}
int mod(int* no1,int* no2) {
	int total = *no1 % *no2;
		printf("%d",total);
}







