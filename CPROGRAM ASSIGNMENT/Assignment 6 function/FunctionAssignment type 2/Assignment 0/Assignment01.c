// 1. write a c program to add two integers and display the result
   
#include<stdio.h>
int add();
void main (){
   	   
	   printf("%d",add());	
   
}

 int add(){
	int a,b;
	printf("Enter the first number ");
	scanf("%d",&a);
	printf("Enter the second number ");
	scanf("%d",&b);
    
	 return a+b;
}