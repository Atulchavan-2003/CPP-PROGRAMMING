/*8 Check the given number is Strong number or not.
Input: n = 145
Output: Strong*/
#include <stdio.h>
int strong(int*);
void main(){
	int n = 145;
	strong(&n);
}
int strong(int* n){
	int temp =*n;
    int sum = 0,r , i = 1;
	while(*n > 0){
		int fact = 1;
		r = *n % 10;
		 while(r>0){
		 	fact = fact*r;
		 	r--;
		 }
		
		sum = sum + fact ;
	
		*n = *n / 10; 	
	}
	if(temp == sum)
		printf("strong number");


}