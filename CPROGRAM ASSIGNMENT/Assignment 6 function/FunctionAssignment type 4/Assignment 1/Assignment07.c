//7. Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
//respectively.
#include<stdio.h>
int check(int);
void main () {
	int salary,da,ta, hra,total;
	printf("Enter the salary");
 	scanf("%d",&salary);
	    int a=check(salary);
	       printf("%d hello ",a);
		if(a >= 5000){
		da = a / 100 * 15;
		ta = a / 100 * 25;
		hra = a / 100 * 30;

		printf("%d %d %d \n",da,ta,hra);
		total = a - da - ta - hra;
		printf("    %d   ",total);
	}

}
int check(int salary){
	int da,ta,hra,total;
	if (salary <= 5000) {
		da = salary / 100 * 10;
		ta = salary / 100 * 20;
		hra = salary / 100 * 25;

		printf("%d %d %d",da,ta,hra);
		total = salary - da - ta - hra;
		return total;
	}

}