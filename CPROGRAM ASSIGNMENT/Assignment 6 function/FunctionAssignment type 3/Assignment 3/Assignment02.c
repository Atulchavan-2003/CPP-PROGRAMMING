/*2 Print table for given number.
Input: n = 5
Output: 5 10 15 20 25 30 35 40 45 50*/
#include<stdio.h>
int table(int,int ); //function declaration
void main(){
	int n,i = 1;
	printf("enter number for creating table \n");
	scanf("%d",&n);
	table(i,n);
}//main end 
int table(int a,int n){// function defination
	while(a <= 10){
		printf("%d ",n * a);
		a++;
	}
}