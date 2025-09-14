
//6. Write a program to check whether a given character is uppercase or lowercase.
#include <stdio.h>
int get_caracter(char);
int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch); 
	 int a=get_caracter(ch);
    if(a==1)
        printf("The character '%c' is uppercase.\n", ch);
    else if(a==2)
        printf("The character '%c' is lowercase.\n", ch);
    else
        printf("The character '%c' is not an alphabetic letter.\n", ch);

}
int get_caracter(char ch){
    if (ch >= 'A' && ch <= 'Z') 
    	return 1;
    else if (ch >= 'a' && ch <= 'z') 
  		return 2;
    else 
    return 0;
}

