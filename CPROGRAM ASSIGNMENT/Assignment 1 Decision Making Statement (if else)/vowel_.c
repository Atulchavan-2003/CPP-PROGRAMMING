// 04 write a program to check whether a given character is vowel or consonant

#include<stdio.h>
void main(){
	char  word;
		printf("Enter the word \n ");
		scanf("%c",&word);
		if( word == 'a'  || word == 'e' || word == 'i' || word == 'o' || word == 'u'  )
		{
			printf("%c vowel",word);
		}
		else
		{
			printf("%c consonant",word);
		}
  				
}