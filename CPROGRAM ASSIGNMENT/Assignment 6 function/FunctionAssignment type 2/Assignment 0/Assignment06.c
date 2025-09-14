
//6. Write a program to check whether a given character is uppercase or lowercase.
#include <stdio.h>
int up_lo_case();
int main() {

    int character = up_lo_case();
    if(character == 1)
        printf("The character '%c' is uppercase.\n");
    else if(character== 2)
	    printf("The character '%c' is lowercase.\n");
    else  
	    printf("The character '%c' is not an alphabetic letter.\n");
	    
}
 int up_lo_case(){
    char ch;

    
    printf("Enter a character: ");
    scanf(" %c", &ch);  

    
    if (ch >= 'A' && ch <= 'Z') 
      return 1;
    
    else if (ch >= 'a' && ch <= 'z') 
    	return 2;
    else 
    	return 3;
     
 }