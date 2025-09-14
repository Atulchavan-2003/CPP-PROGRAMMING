#include<stdio.h>
int main(){
	
	int r1,r2,r3 ,r4,d,d2,sum,rev;
	int a = 1234;
	
	r1 = a % 10;    //5
	d = a / 10;   //  d = 564
	
	d2 = d / 10;  //  d2 = 56
	r2 = d % 10;
	
	r3 = d2 % 10;   // r3 = 4; 
	r4 = d2 / 10; 
	
	rev = r1 *1000+r2*100+r3*10+r4;
	 sum = r1 + r2 + r3 + r4;
	printf("sum of %d  ",sum);
	printf("sum of %d  ",rev);
	return 0;	
}