// 02 Write a program to check given 3 digit number is pallindrome or not
#include <stdio.h>
void pallindrome ();
void main () {
  
  pallindrome();
     
}
void pallindrome (){
	int a,r1, r2,r3, rev;
	 printf("Enter the number only three digit \n");
	 scanf("%d",&a);
	r1 = a % 10;
	r2 = (a / 10)% 10;
	r3 = a / 100;
	
	rev = r1 * 100 + r2 * 10 + r3;
    printf("%d ",rev);
    
    if (a > 99 && a <=999){
    	if (a == rev){
    		printf(" it is pallindrome number");
		}
		else{
			printf("it is not pallindrome number");
		}
	}
	else {
		printf("You have entered the number incorectly.\nYou can enter the number only three digit ");
	}
}