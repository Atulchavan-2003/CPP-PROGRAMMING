/*7. WAP to Remove the Characters of Odd Index Values in a String*/
#include<stdio.h>
#include<string.h>
void main(){
	char str[]="education";
	int len=strlen(str);
	int j=0;
	for(int i=0;i<len;i++){
		if(i%2==0){
			str[j]=str[i];
			j++;
			
		}
	}
	str[j]='\0';
	printf("%s",str);
}