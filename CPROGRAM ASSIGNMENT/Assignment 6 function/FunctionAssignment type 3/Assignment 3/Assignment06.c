/*6 Check the given number is Perfect number or not.
Input: n = 28
Output: Perfect*/
#include<stdio.h>
int perfect_num(int,int,int,int);
void main (){
	int i = 1,sum = 0,n = 6 ,count =0;
	perfect_num(i,sum,n,count);
	
}
int perfect_num(int i,int sum,int n,int count){
	while(i < n){
		if (n%i== 0){
	        printf("%d \n",i);
		     
			sum = sum + i;
		}
		i++;
	}
	if (sum == n)
	 	printf("perfect number %d",sum);
	else
		printf("not perfect number %d", sum); 	
}