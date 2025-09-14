/*5 Check the given number is Armstrong number or not..
Input: n = 153
Output: Armstrong*/
#include <stdio.h>
void main(){
	int n = 153;
	int temp = n,r,sum=0;
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