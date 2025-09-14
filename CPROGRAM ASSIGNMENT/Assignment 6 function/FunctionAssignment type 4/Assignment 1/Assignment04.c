// 04 write a program to check whether a given character is vowel or consonant

#include<stdio.h>
int getcaracter(int);
void main(){
	char  word;
		printf("Enter the word \n ");
		scanf("%c",&word);
		int a= getcaracter(word);
		if(a==1)
			printf("%c vowel",word);
		else	
			printf("%c consonant",word);
		   
  				
}
int getcaracter(int word){
		if( word == 'a'  || word == 'e' || word == 'i' || word == 'o' || word == 'u'  )
			return 1;
		else
			return 0;
}