/*5. WAP to Count the Number of Vowels in a String*/
#include<stdio.h>
#include<string.h>
void count_vowels(char*);
void main(){
	char str[]="Education";
	count_vowels(str);
}
void count_vowels(char* str){
	int len=strlen(str);
	int count=0;
	for(int i=0;i<len;i++){
		
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='O'||str[i]=='U'){
			count++;
		}
	}
	printf(" %d ",count);
}