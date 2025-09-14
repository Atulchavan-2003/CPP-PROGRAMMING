
#include <stdio.h>
#include <string.h>

void strlength(char*);
void strcopy(char*);
void copy_n(char*);
void strjoin(char*);
int main() {
	char str[] = "atul";
	int press;
     printf("built-in function 9 : %s \n ",strstr(str,"tu"));

	printf("Press a number:\n");
	printf("1 - Find the string length\n");
	printf("2 - Copy full string\n");
	printf("3 - Copy first n characters\n");
	scanf("%d", &press);

	if (press == 1)
		strlength(str);
	else if (press == 2)
		strcopy(str);
	else if (press == 3)
		copy_n(str);
	else if (press == 4)
		strjoin(str);
	else if (press == 5)
		cmp(str);
	else if (press == 6)
		cmpn(str);
	else if (press == 7)
		strpoint(str);
	else
		printf("Invalid option.\n");
     
}

void strlength(char* str) {   // function 1
	int len = strlen(str);
	printf("String length is %zu\n", len);
}

void strcopy(char* str) {//built-in function 1
	char arr[100];
	strcpy(arr, str);
	printf("Copied string: %s\n", arr);
}

void copy_n(char* str) {  //built-in function 2
	int n;
	printf("Enter number of characters to copy: ");
	scanf("%d", &n);

	char arr[100];
	strncpy(arr, str, n);
	arr[n] = '\0';
	printf("Copied first %d characters: %s\n", n, arr);
}
void strjoin(char* str) {  //built-in function 3 and 4
	char arr[100]="hey how are you";
//	strcat(arr,str);
//    printf(" add word \n%s",arr);
	strncat(str,arr,2);
	printf("%s",str);
}
void cmp(char* str) { //built-in function 5
	int a=strcmp(str,"atul");
	printf("%d",a);
}
void cmpn(char* str) {    //built-in function 6
	int a =strncmp(str,"atul",3);
	printf("%d",a);
}
void strpoint(char* str) { //built-in function 7 and 8 
//	str = strchr(str,'t');
//	printf("%s\n",str);
	str = strrchr(str,'u');
	printf("%s",str);
}




