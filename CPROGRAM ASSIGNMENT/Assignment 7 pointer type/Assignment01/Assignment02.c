// 1.Write a program to check whether a number is even or not 
#include <stdio.h>
int even_or_odd( int* );
void main() {
		int number;
		printf("Enter the number \n");
		scanf("%d", &number);
		even_or_odd(&number);
	
}
int even_or_odd(int* number){
		
		if (*number % 2 == 0)
			printf("This is even number %u",*number);
		else
			printf("This is odd number ");
}