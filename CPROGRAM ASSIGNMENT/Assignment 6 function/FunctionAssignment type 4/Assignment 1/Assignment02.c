// 02 Write a program to check given 3 digit number is pallindrome or not
#include <stdio.h>
int palli(int);
void main (){


	int a;
	printf("Enter the number only three digit \n");
	scanf("%d",&a);
    int b= palli(a);
	
		if (b==1)
			printf(" it is pallindrame number");
		else if(b ==0)
			printf("it is not pallindrome number");
	
		else {
			printf("You have entered the number incorectly.\nYou can enter the number only three digit ");
		}
    

}
int palli(int a) {
	int r1, r2,r3, rev;
	r1 = a % 10;
	r2 = (a / 10)% 10;
	r3 = a / 100;

	rev = r1 * 100 + r2 * 10 + r3;
//	printf("%d ",rev);

	if (a == rev)
		return 1;
	else
		return 0;

}