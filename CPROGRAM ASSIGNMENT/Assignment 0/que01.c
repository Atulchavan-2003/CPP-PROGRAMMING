/*1. Write a program to scan string from user then scan a single character and search it
in a accepted string.*/
#include<stdio.h>
char* getsearch(char*,char);
void main() {
	char str[100],n;
	printf("Enter the name : \n");
	scanf("%s",str);
	printf("which caracter do you want search :\n");
	scanf(" %c",&n);

	getsearch(str,n);
}
char* getsearch(char* str,char n) {
	int i = 0;
	int count[10];
	count[0];
	while(str[i]!=NULL) {
		if(str[i]==n) {
			count[i] = i;
		}

		i++;
	}
	if(count!=0){
		printf("found at %d ",count[0]);
		printf("found at %d ",count[8]);
	}
	else
		printf("Not found");
}