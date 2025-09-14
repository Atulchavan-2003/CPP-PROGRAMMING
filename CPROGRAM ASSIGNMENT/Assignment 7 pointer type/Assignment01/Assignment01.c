// 1.Write a program to check whether a number is even or not 
#include <stdio.h>
int even_or_odd( int*,int* );
void main() {
	int a = 10, b= 20;
	printf("main A is %d main B is %d \n",a,b);
	even_or_odd(&a,&b);
	printf("main A is %d main B is  %d \n",a,b);
}
int even_or_odd(int* a, int* b){
	int temp = *a;
	   *a= *b;
	   *b = temp;	
	printf("A is %u  B is %u \n",*a,*b);
}