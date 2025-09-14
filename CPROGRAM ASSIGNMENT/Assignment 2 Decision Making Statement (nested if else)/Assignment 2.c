/*2. Accept three sides of a triangle from the user and determine whether the triangle is
equilateral, isosceles, or scalene.*/
#include <stdio.h>
void main (){
	int s1,s2,s3;
	printf("Enter sides of triangle");
	scanf("%d",&s1);
	
	printf("Enter sides of triangle");
	scanf("%d",&s2);
	
	printf("Enter sides of triangle");
	scanf("%d",&s3);
	
	if (s1 == s2 & s2 == s3){
	 printf("equilateral");	
		
	}
    else if (s1 == s2 || s2 == s3 || s3 == s1){
		printf("isosceles");
	}
	else {
			printf("scalene");
	}
	
	
	
	
}