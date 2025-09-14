/*8 Check the given number is Strong number or not.
Input: n = 145
Output: Strong*/
#include <stdio.h>
void strong();
void main(){
	strong();
}
void strong(){
	int n = 145,sum = 0,r , i = 1;
	int temp =n;
	while(n > 0){
		int fact = 1;
		r = n % 10;
		 while(r>0){
		 	fact = fact*r;
		 	r--;
		 }
		
		sum = sum + fact ;
	
		n = n / 10; 	
	}
	if(temp == sum)
		printf("strong number");


}