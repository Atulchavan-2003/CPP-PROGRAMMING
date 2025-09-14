// 05 write a program to check whether a person is eliginle to vote ( age >= 18).
#include <stdio.h>
int get_age(int);
void main (){
	int age;
	printf("Enter the number");
	scanf("%d",&age);
	 if(get_age(age))
		printf("eligible for voting");
	 else
		printf("not eligible for votting");
	 	
	
}
int get_age(int age){
	if(age >= 18 )
		return 1;
	else 
		return 0;
}

