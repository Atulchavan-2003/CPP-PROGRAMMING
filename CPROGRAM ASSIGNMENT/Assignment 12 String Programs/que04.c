/*4. WAP to Form a New String where the First Character and the Last Character have
been Exchanged*/
#include<stdio.h>
#include<string.h>
void swap(char*);
void main() {
	char str[100];
	printf("Enter the string :  ");
	scanf("%s",str);
	printf("New string : %s \n",str);
	swap(str);

}
void swap(char* str) {
	int len = strlen(str);
	char tem;
	int flag=0;
	for(int i=0; i<len; i++) {

		if(i<1) {
			flag=1;
			tem=str[i];
			str[i]=str[len-1];
			str[len-1]=tem;
			break;
		}
	}
	printf("After swaping string : %s\n",str);
}