/*2 Print table for given number.
Input: n = 5
Output: 5 10 15 20 25 30 35 40 45 50*/
#include<stdio.h>
void table();
void main(){
	table();
}
void table(){
	int n,i = 1;
	printf("enter number for creating table \n");
	//scanf("%d",&n);
	while(i <= 10){
		printf("%d ",n * i);
		i++;
	}
}