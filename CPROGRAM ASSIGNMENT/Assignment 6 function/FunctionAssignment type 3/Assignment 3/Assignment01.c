/*1 Print numbers from 1 to 10
Output: 1 2 3 4 5 6 7 8 9 10*/
#include <stdio.h>
int number(int);
void main (){
	int i = 1;
	number(i);
}
int number(int a){

	while(a <= 10){
		printf("%d ",a);
		a++;
	}
}