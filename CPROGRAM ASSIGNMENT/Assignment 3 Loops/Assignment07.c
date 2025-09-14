/*7 Find factorial of given number.
Input: n = 5
Output: 120*/

#include<stdio.h>
void main(){
	int i = 1,sum = 1 ;
	while(i < 5){
		sum = sum+sum * i;
     	printf("%d ",sum);
		
		i++;
 	}
}