#include<stdio.h>
#include<string.h>
char* my_strcat(char*,char*) ;
void main() {
	char a[]="hey ";
	char b[]="atul";
	my_strcat(a,b);
	printf("%s",a);
}
char* my_strcat(char* a,char* b) {
	int i=0;
	while(a[i]!='\0') {
		i++;
	}

	int k=0;
	for(int j=i; j<b[k]!='\0'; j++) {

		a[j]=b[k];
		k++;

	}
    return a;
}