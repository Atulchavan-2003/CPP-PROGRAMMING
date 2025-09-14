//5. Write a C program to input five numbers and find their average.
#include<stdio.h>
int avarage();
void main () {

	printf("%d",avarage());
}
int avarage () {
	int a = 10, b = 15, c =20, d = 25, e = 30,sum;

	sum = a+b+c+d+e;
	sum = sum/5;
	return sum;
}