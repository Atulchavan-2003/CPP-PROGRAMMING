#include <stdio.h>
void main () {
	int a,b,c;      // a = 60, b = 52,c = 65
		printf("Enter the first number \n");
		scanf("%d", &a);
		printf("Enter the second number \n");
		scanf("%d", &b);
		printf("Enter the Third number \n");
		scanf("%d", &c);
	if(a > b && a > c)
		printf("%d  is grater number", a);
    if ( b > c)
		printf("%d  is grater number", b);	
	else
		printf("%d is grater number", c);
}