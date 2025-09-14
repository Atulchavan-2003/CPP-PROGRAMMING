/*1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
desired operations.*/
#include <stdio.h>
void addi();
void sub();
void div();
void mult();
void mod();

void main () {

	char op;



	printf("enter the operator \n");
	fflush(stdin);
	scanf("%c",&op);


	if(op == '+') {
		addi();
	} else if(op == '-') {
		sub();
	} else if(op == '/') {
		div();
	} else if(op == '*') {
        mult();
		
	} else if(op == '%') {
		mod();
	} else {
		printf("incorrect operator");
	}
}//main end

void  addi() {
	
	int no1,no2 ;
	printf("Enter the firsr number\n");
	scanf("%d",&no1);
	printf("Enter second  number ");
	scanf(" %d",&no2);
	printf("%d ",no1+no2);

}
void sub() {
	int no1,no2 ;
	printf("Enter the firsr number\n");
	scanf("%d",&no1);
	printf("Enter second  number ");
	scanf(" %d",&no2);
	printf("%d ",no1-no2);

}
void div() {
	int no1,no2 ;
	printf("Enter the firsr number\n");
	scanf("%d",&no1);
	printf("Enter second  number ");
	scanf(" %d",&no2);
	printf("%d ",no1/no2);

}
void mult() {
	int no1,no2 ;
	printf("Enter the firsr number\n");
	scanf("%d",&no1);
	printf("Enter second  number ");
	scanf(" %d",&no2);
	printf("%d ",no1*no2);

}
void mod() {
	int no1,no2 ;
	printf("Enter the firsr number\n");
	scanf("%d",&no1);
	printf("Enter second  number ");
	scanf(" %d",&no2);
	printf("%d ",no1%no2);

}







