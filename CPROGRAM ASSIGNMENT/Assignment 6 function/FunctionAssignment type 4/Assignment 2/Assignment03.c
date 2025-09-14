//3. Write a program to find greatest of three numbers using nested if-else.
#include <stdio.h>
int getnumber(int,int,int);
void main(){
	int a,b,c;
	printf("Enter the first number \n");
	scanf("%d",&a);
	
	printf("Enter the first number \n");
	scanf(" %d",&b);
	
	printf("Enter the first number \n");
	scanf(" %d",&c);
	int no = getnumber(a,b,c);
	if(no==1)
		printf(" a is grater");
	else if (no==2)
		printf(" b is grater");
	else
		printf("c is grater");
	
}
int getnumber(int a,int b,int c){
	if (a > b){
		if(a > c )
		return 1;
	}
	else if(b > c){
		return 2;
	}
	else{
		return 0;
	}
	
}