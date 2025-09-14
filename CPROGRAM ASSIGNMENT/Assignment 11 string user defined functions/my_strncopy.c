#include<stdio.h>
#include<stdio.h>
char* my_strcopy(char*,char*,int);
void main() {
	char str1[4]="atul";
	char str2[4];

	my_strcopy(str2,str1,2);
	printf("%s",str2);
}
char* my_strcopy(char* str2,char* str1,int n) {

	int i=0;
	while(str1[i]!='\0'&& i < n ) {
		str2[i]=str1[i];
		i++;
	}


}