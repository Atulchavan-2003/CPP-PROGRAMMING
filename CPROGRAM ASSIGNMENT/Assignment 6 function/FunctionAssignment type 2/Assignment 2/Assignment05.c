/*7. Accept the age and check if the person is:
/Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)*/
#include <stdio.h>
int age();
void main(){
   int a = age();
   if (a == 1)
		printf("child");
   else if (a==2)
		printf("Teenager");
   else if (a==3)
		printf("Adult");
   	else		
	    printf("senior");
}
int age (){
	int age;
	printf("Enter the age ");
	scanf("%d",&age);
	
	if (age < 12)
	 return 1;
	else if(age < 19)
	return 2;	
	else if ( age <= 59)
	return 3;
	else if(age >= 60){
	return 4;
	}
}