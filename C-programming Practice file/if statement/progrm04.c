// leap year or not
#include<stdio.h>
void main () {
	int year = 2005;
	if ( year % 4 == 0 && year % 100 !=0 || year % 400) {
		printf("leap year ");

	} else {
		printf("not leap year");
	}
}