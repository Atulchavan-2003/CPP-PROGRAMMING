/*4 Check the given number is prime or not.
Input: n = 7
Output: Prime*/
#include <stdio.h>
void main(){
	int n = 7,flag = 0;
	int i = 2;
	while(i < n/2){
		if (n % i == 0){
			flag++;
			break;	
   		}
		i++;
	}
	if(flag == 0)
		printf("prime number");
	else
		printf("not prime number");	
}