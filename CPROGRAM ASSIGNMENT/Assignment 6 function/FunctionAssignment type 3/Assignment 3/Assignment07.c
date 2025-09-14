/*7 Find factorial of given number.
Input: n = 5
Output: 120*/

#include<stdio.h>
int fact(int,int);
void main(){
	int i = 1,sum = 1 ;
	fact(i,sum);
}
int fact(int i,int sum){
	while(i < 5){
		sum = sum+sum * i;
     	printf("%d ",sum);
		
		i++;
 	}
}