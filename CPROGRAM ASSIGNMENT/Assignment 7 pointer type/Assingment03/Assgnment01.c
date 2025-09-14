/*1 Print numbers from 1 to 10
Output: 1 2 3 4 5 6 7 8 9 10 */
#include <stdio.h>
int number(int*);
void main (){
	int i;
	number(&i);
	printf("%d",i);
}
int number(int* a){
       *a=10;
	   int i = 1;  
	while(i <= 10){
		printf(" %d ",i);
		i++;
	}
}