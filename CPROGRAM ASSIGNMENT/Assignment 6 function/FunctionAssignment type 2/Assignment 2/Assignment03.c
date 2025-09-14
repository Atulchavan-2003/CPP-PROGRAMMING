/*4. Ask the user to enter marks.
Then show the result based on these rules:
If marks are more than 75 ? show "Distinction"
If marks are more than 65 ? show "First Class"
If marks are more than 55 ? show "Second Class"
If marks are 40 or more ? show "Pass Class"
If marks are less than 40 ? show "Fail"*/
#include <stdio.h>
int pass_or_fail();
void main (){
	int a= pass_or_fail();
	 if(a==1)
	 	printf("Distinction");
	 else if (a==2)
	 	printf("First class");
	 else if (a==3)
	 	printf("second class");
	 else if (a==4)	
	 	printf("Pass class");
	 else 
	 	printf("Fail");
	 		
}
int pass_or_fail(){
	
	int marks;
	 printf(" Enter the marks");
	 scanf("%d", &marks);
	 
	 if (marks >= 75){
	 	return 1;
	 }
	 else if (marks >= 65){
	 	return 2;
	 }
	 else if (marks >= 55){
	 	return 3;
	 }
	 else if (marks >= 40){
	 	return 4;
	 }
	 else if (marks <= 40 ){
	 	return 5;
	 }
}