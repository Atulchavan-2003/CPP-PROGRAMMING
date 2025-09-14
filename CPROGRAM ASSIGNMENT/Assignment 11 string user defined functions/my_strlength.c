#include<stdio.h>
#include<string.h>
int my_strlen(char*);
void main(){
	char str[]="atul";
   printf(	"%d",my_strlen(str));
}
int my_strlen(char* str){

	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	str[i]='\0';
	return i;
}