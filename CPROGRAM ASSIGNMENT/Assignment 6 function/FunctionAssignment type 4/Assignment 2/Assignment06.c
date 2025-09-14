/*6. Accept a number and check if it is divisible by 3, 5, or both.
(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
both" or” Divisible by None”)*/
#include <stdio.h>
int getans(int);
void main(){
	
	int no;
	printf("Enter the number");
	scanf("%d",&no);
	int a=getans(no);
	if (a== 1)
		printf(" Divisible by both");
	else if (a==2)
		 printf("Divisible by 3 but not 5");
	else if(a==3)
		printf("Divisible by 5 but not by 3");
	else 
		printf("Divisible by nune");
	
}
int getans(int no){
	if (no % 3 == 0 && no % 5 == 0){
		return 1;
	}
	else if (no % 3 == 0 ){
		return 2;
	}
	else if(no % 5 == 0){
		return 3;
	}
	else{
		return 0;
	}
}