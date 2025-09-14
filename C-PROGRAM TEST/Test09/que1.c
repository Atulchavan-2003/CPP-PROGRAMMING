// write a program to remove dupllicate character from string

#include<stdio.h>
#include<string.h>
void main() {
	char ch[100]="ltul";
    int index=0;
	int len = strlen(ch);
	for(int i =0; i<len; i++) {
		for(int j = i+1; j<len;) {
			if(ch[i]==ch[j]) {
				for(int k = j;k<len;k++){
				    ch[k]=ch[k+1];
				}
			     len--;
			}
			else{
				 j++;
			}
		}
	}
	
	printf("%s",ch);
//	printf("removed dupllicate element :%d",index);

}
