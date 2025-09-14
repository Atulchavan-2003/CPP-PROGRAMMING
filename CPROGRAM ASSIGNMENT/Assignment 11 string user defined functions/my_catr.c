#include<stdio.h>
#include<string.h>
char* my_strcat(char*,char*,char) ;
void main() {
	char a[]="hey ";
	char b[]="atul";
	int c = 3;
	my_strcat(a,b,c);
	printf("%s",a);
}
char* my_strcat(char* a,char* b,char c) {
	int i=0;
	while(a[i]!='\0') {

		i++;
	}
	int k=0;
	while(a[k]!='\0'&& k < c) {
		a[i++]=b[k];
		k++;
	}
	return a;
}