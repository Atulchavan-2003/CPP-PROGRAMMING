//7. Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
//respectively.
#include<stdio.h>
int salary_less_than_5000(int);
int salary_greater_than_5000(int);

void main () {
	int salary;
	printf("Enter the salary");
 	scanf("%d",&salary);
	if (salary <= 5000)
		salary_less_than_5000(salary);
	else 
		salary_greater_than_5000(salary);
	
}
int salary_less_than_5000(int salary){
	    int da,ta, hra,total;
		da = salary / 100 * 10;
		ta = salary / 100 * 20;
		hra = salary / 100 * 25;

		printf("%d %d %d",da,ta,hra);
		total = salary - da - ta - hra;
		printf("  %d  ",total);
}
int salary_greater_than_5000(int salary){
	    int da,ta, hra,total;
		da = salary / 100 * 15;
		ta = salary / 100 * 25;
		hra = salary / 100 * 30;

		printf("%d %d %d \n",da,ta,hra);
		total = salary - da - ta - hra;
		printf("    %d   ",total);
}