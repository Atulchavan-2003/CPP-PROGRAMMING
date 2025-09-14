/*9. WAP to Take in Two Strings and Display the Larger String without Using Built-in
Functions*/
#include<stdio.h>
void main(){
	char str1[100];
	char str2[100];
	printf("Enter the first string\n");
	scanf(" %s",str1);
	printf("Enter the second string\n");
	scanf(" %s",str2);
	int i=0;
	while(str1[i]!='\0'){
		i++;
	}
	int j=0;
	while(str2[j]!='\0'){
		j++;
	}
	
	if(j<i)
		printf("first string larger : %s",str1);
	else	
		printf("second string larger : %s",str2);
	
}