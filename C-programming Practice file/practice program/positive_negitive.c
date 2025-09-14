#include <stdio.h>
void main (){
	int no ;
	printf("Enter the number");
	scanf("%d",&no);
	if (no > 0){
		printf("positive number");
	}
	else if ( no == 0){
		printf("number is zero");
	}
	else{
		printf("number is negitive");
	}
}