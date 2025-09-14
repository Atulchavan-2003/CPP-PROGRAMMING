// 1.Write a program to check whether a number is even or not 
#include <stdio.h>

void main() {
		int number;
	
		printf("Enter the number \n");
		scanf("%d", &number);
		
		if (number % 2 == 0)
			printf("This is even number");
			
		else
			printf("This is odd number ");
}
