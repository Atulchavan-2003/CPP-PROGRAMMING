//3. Write a program to find greatest of three numbers using nested if-else.
#include <stdio.h>
int find_big_number();
void main(){
    int a = find_big_number();
    if(a==1)
		printf(" a is grater");
    else if(a==2)
		printf(" b is grater");
    else
		printf("c is grater");
}
int find_big_number(){
	int a,b,c;
	printf("Enter the first number \n");
	scanf("%d",&a);
	
	printf("Enter the first number \n");
	scanf(" %d",&b);
	
	printf("Enter the first number \n");
	scanf(" %d",&c);
	
	if (a > b){
		if(a > c )
		return 1;
	}
	else if(b > c){
		return 2;
	}
	else{
		return 3;
	}
}