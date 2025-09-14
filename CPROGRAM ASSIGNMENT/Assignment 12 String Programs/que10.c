/*10. Write a program to check the string is palindrome or not.*/
#include<stdio.h>
#include<string.h>
void main() {
	char str[]="abba";
	int len = strlen(str);
	char brr[len];
	for(int i=0; i<len; i++) {
		brr[i]=str[i];
	}
	brr[len]='\0';
	char tem[10];

	for(int i=0; i<len/2; i++) {
		tem[0] = str[i];
		str[i] = str[len-1-i];
		str[len-1-i] = tem[0];
	}
	printf("String is : %s :",str);
	if(strcmp(str,brr)==0){
		printf("pallindrome");
	}
	else{
		printf("Not pallindrome");
	}
}
