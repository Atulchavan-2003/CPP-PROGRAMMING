#include<stdio.h>
void main() {
	int n,count=0,sum=0,sum2=0,sum3=0,rem;
	scanf("%d",&n);
    while(n>0){
    	rem = n%10;
    	sum+=rem;
    	n=n/10;
	}
	rem =0;
	printf("  %d",sum);
    while(sum>0){
    	rem = n%10;
    	sum2+=rem;
    	n=n/10;
	}
	printf("%d",sum2);
	sum2=0;
	printf("%d",sum2);
	while(sum2>0){
		rem = n%10;
    	sum3+=rem;
    	n=n/10;
	}
	printf("%d",sum3);
		
	}