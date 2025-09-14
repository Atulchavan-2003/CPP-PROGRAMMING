/*2. Accept three sides of a triangle from the user and determine whether the triangle is
equilateral, isosceles, or scalene.*/
#include <stdio.h>
int isside(int,int,int);
void main (){
	int s1,s2,s3,a;
	printf("Enter sides of triangle");
	scanf("%d",&s1);
	
	printf("Enter sides of triangle");
	scanf("%d",&s2);
	
	printf("Enter sides of triangle");
	scanf("%d",&s3);
      a = isside(s1,s2,s3);
	if(a==1)
    	printf("equilateral");	
	else if(a==2)
		printf("isosceles");
	else
		printf("scalene");
	
		
}
int isside(int s1, int s2, int s3){

	if (s1 == s2 & s2 == s3)
		return 1;
    else if (s1 == s2 || s2 == s3 || s3 == s1)
	    return 2;
	else 
		return 0;
}