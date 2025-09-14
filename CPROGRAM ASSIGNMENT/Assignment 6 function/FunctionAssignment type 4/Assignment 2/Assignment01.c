/*1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
desired operations.*/
#include <stdio.h>
int addi(int,int);
int sub(int,int);
int div(int,int);
int mult(int,int);
int mod(int,int);

void main () {

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
		total=addi(no1,no2); //function calling
		printf("%d",total);
	} else if(op == '-') {
		total=sub(no1,no2);
		printf("%d",total);
	} else if(op == '/') {
		total=div(no1,no2);
		printf("%d",total);
	} else if(op == '*') {
        total=mult(no1,no2);
		printf("%d",total);
	} else if(op == '%') {
		total=mod(no1,no2);
		printf("%d",total);
	} else {
		printf("incorrect operator");
	}
}//main end here

int addi(int no1,int no2) {
	return no1+no2;
}
int sub(int no1,int no2) {
	return no1-no2;
}
int div(int no1,int no2) {
	return no1/no2;
}
int mult(int no1,int no2) {
	return no1*no2;
}
int mod(int no1,int no2) {
	return no1%no2;
}







