#include<stdio.h>
// write the program in c pallindrame or not
void main() {
	int num = 12521, r1, r2, r3,r4,r5,rev;

  //	  scanf("%d", num);
	r1 = num % 10 ;
	r2 = (num / 10) % 10;
	r3 = (num / 100) % 10;
	r4 = (num / 1000) % 10;
	r5 = (num / 10000) % 10;
	rev = r1*10000+r2*1000+r3*100+r4*10+r5;

	if (num == rev) {
		printf("pallindrome number");
	} else
		printf("not palindrome number");
}