/*WAP Replace all Occurrences of ‘a’ with $ in a String*/
#include<stdio.h>
char* atul(char*,char);
void main(){
	char str[]="atulchavan";
     char n;
	printf("%s\nreplace character do you want\n",str);
	scanf(" %c",&n);
	atul(str,n);
}
char* atul(char* str,char n){
	
	for(int i=0;str[i]!='\0';i++){
		if(str[i] == n){
			str[i]='$';
		}
	}
	printf("hello : %s",str);
}