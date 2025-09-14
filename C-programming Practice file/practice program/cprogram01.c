#include<stdio.h>
// 5 digit addition and reverse 
void main(){
	int num = 53324, r1, r2, r3, r4 ,r5, rev, add;
	  
	  r1 = num % 10 ;
	  r2 = (num / 10) % 10;
	  r3 = (num / 100) % 10;
	  r4 = (num / 1000) % 10;
	  r5 = (num / 10000) % 10;  
	  rev = r1*10000+r2*1000+r3*100+r4*10+r5;
	   add = r1+r2+r3+r4+r5;
	   
	   printf("This is reverse number %d \n This is a addition %d",rev,add);   
}