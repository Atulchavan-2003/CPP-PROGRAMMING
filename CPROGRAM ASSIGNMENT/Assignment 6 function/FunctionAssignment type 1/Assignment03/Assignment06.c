/*6 Check the given number is Perfect number or not.
Input: n = 28
Output: Perfect*/
#include<stdio.h>
void perfect();
void main (){
	perfect();
}
void perfect(){
	int i = 1,sum = 0,n = 28 ,count =0;
	while(i < n){
		if (n%i== 0){
	        printf("%d \n",i);
		     
			sum = sum + i;
		}
		i++;
	}
	if (sum == n)
	 	printf("perfect number %d",sum);
	else
		printf("not perfect number %d", sum); 	
}