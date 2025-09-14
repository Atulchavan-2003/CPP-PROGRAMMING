/*6. WAP to Take in a String and Replace Every Blank Space with special symbol.*/
#include<stdio.h>
#include<string.h>
void main(){
	char str[100];
	printf("Enter the paragraph with space");
	   fgets(str, sizeof(str), stdin);  
//	scanf("%s",str);
	 int len =strlen(str);
	 for(int i=0;i<len;i++){
	 	if(str[i]==' '){
	 		str[i]='@';
		 }
	 }
	 printf("%s",str);
	
}