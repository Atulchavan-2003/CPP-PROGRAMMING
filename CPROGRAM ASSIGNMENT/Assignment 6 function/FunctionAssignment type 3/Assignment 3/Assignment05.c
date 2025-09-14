/*5 Check the given number is Armstrong number or not..
Input: n = 153
Output: Armstrong*/
#include <stdio.h>
int armstrong(int,int,int,int);
void main(){
	int n = 153;
	int temp = n,r,sum=0;
	armstrong(n,temp,r,sum);
	
}
int armstrong(int n,int temp,int r,int sum){
	while(n > 0){
		r = n % 10;
	    sum=sum+r*r*r;
	    n = n /10;
	    printf("%d   ",sum);
	}
	if (temp == sum )
	 	printf("Armstrong number  %d ",sum);
	else
		printf(" not Armstrong number  %d ",sum);	
}