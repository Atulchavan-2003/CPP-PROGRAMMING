/*2 Print table for given number.
Input: n = 5
Output: 5 10 15 20 25 30 35 40 45 50*/
#include<stdio.h>
int table(int*); //function declaration
void main(){
	int n;
	printf("enter number for creating table \n");
	scanf("%d",&n);
	table(&n);
}//main end 
int table(int* n){// function defination
       int i = 1;
	while(i <= 10){
		
		printf("%u ",*n * i);
		i++;
	}
}