#include<stdio.h>
#include<stdio.h>
char* my_strcopy(char*,char*);
void main() {
	char str1[4]="atul";
	char str2[4];
	my_strcopy(str2,str1);
	printf("%s",str2);
}
char* my_strcopy(char* str2,char* str1) {
	int i=0;
	while(str1[i]!='\0') {
		str2[i]=str1[i];
		i++;
	}
	i--;
	str2[i]='\0';
}