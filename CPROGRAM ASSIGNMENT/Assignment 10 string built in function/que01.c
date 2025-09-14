#include <stdio.h>
#include <string.h>

void strlength(char*);
void strcopy(char*);
void copy_n(char*);
void mystrcat(char*, char*);
void strjoin(char*);
void cmp(char*);
void cmpn(char*);
void strpoint(char*);
void mystrrchr(char*);
void fn10_memchr(char*);
void fn11_memcmp(char*);
void fn12_memcpy(char*);
void fn13_memmove(char*);
void fn14_memset(char*);
void fn15_strpbrk(char*);
void fn16_strstr(char*);
void fn17_strcoll(char*);
void fn18_strerror(char*);
void fn19_strxfrm(char*);
void fn20_strdup(char*);
void fn21_strndup(char*);
void fn22_strcasecmp(char*);

int main() {
    char str[] = "atul";
    char arr[] = "chavan";
    char brr[100];  // unused except for matching your signature
    printf(" before : %s\n", str);

    int press;
    printf("Press a number:\n");
    printf("1 - Find the string length\n");
    printf("2 - Copy full string\n");
    printf("3 - Copy first n characters\n");
    printf("4 - Concatenate strings\n");
    printf("5 - strjoin\n");
    printf("6 - Compare full strings\n");
    printf("7 - Compare first n characters\n");
    printf("8 - First occurrence of character\n");
    printf("9 - Last occurrence of character\n");
    printf("10 - memchr\n");
    printf("11 - memcmp\n");
    printf("12 - memcpy\n");
    printf("13 - memmove\n");
    printf("14 - memset\n");
    printf("15 - strpbrk\n");
    printf("16 - strstr\n");
    printf("17 - strcoll\n");
    printf("18 - strerror\n");
    printf("19 - strxfrm\n");
    printf("20 - strdup\n");
    printf("21 - strndup\n");
    printf("22 - strcasecmp\n");
    scanf("%d", &press);

    if (press == 1)
        strlength(str);
    else if (press == 2)
        strcopy(str);
    else if (press == 3)
        copy_n(str);
    else if (press == 4)
        mystrcat(str, arr);
    else if (press == 5)
        strjoin(str);
    else if (press == 6)
        cmp(str);
    else if (press == 7)
        cmpn(str);
    else if (press == 8)
        strpoint(str);
    else if (press == 9)
        mystrrchr(str);
    else if (press == 10)
        fn10_memchr(str);
    else if (press == 11)
        fn11_memcmp(str);
    else if (press == 12)
        fn12_memcpy(str);
    else if (press == 13)
        fn13_memmove(str);
    else if (press == 14)
        fn14_memset(str);
    else if (press == 15)
        fn15_strpbrk(str);
    else if (press == 16)
        fn16_strstr(str);
    else if (press == 17)
        fn17_strcoll(str);
    else if (press == 18)
        fn18_strerror(str);
    else if (press == 19)
        fn19_strxfrm(str);
    else if (press == 20)
        fn20_strdup(str);
    else if (press == 21)
        fn21_strndup(str);
    else if (press == 22)
        fn22_strcasecmp(str);
    else
        printf("Invalid choice\n");

    return 0;
}

// Function definitions

void strlength(char* str) {
    int len = strlen(str);
    printf("String length is %d\n", len);
}

void strcopy(char* str) {
    char arr[100];
    strcpy(arr, str);
    printf("Copied string: %s\n", arr);
}

void copy_n(char* str) {
    int n;
    printf("Enter number of characters to copy: ");
    scanf("%d", &n);
    char arr[100];
    strncpy(arr, str, n);
    arr[n] = '\0';
    printf("Copied first %d characters: %s\n", n, arr);
}

void mystrcat(char* str, char* arr) {
    strcat(arr, str);
    printf("Concatenated string: %s\n", arr);
}

void strjoin(char* str) {
    char arr[100] = "hey how are you";
    strncat(str, arr, 2);
    printf("Joined string: %s\n", str);
}

void cmp(char* str) {
    int a = strcmp(str, "atul");
    printf("Comparison result: %d\n", a);
}

void cmpn(char* str) {
    int a = strncmp(str, "atul", 3);
    printf("Comparison result: %d\n", a);
}

void strpoint(char* str) {
    str = strchr(str, 't');
    printf("First occurrence: %s\n", str);
}

void mystrrchr(char* str) {
    str = strrchr(str, 't');
    printf("Last occurrence: %s\n", str);
}

void fn10_memchr(char* str) {
     char* result = memchr(str, 'u', strlen(str));
    if (result != NULL)
        printf("Found 'u' at position: %ld \n", result - str);
    else
        printf("'u' not found\n");
}

void fn11_memcmp(char* str) {
	  char arr[] = "atul";
    int res = memcmp(str, arr, strlen(str));
    if (res == 0)
        printf("Strings are equal\n");
    else if (res < 0)
        printf("First string is less than second\n");
    else
        printf("First string is greater than second\n");
   
}

void fn12_memcpy(char* str) {
      char arr[100];
    memcpy(arr, str, strlen(str) + 1);
    printf("Copied string: %s\n", arr);
}

void fn13_memmove(char* str) {
    char arr[100];
    memmove(arr, str, strlen(str) + 1);
    printf("Moved string: %s\n", arr);
}

void fn14_memset(char* str) {
    memset(str, '*', 2);
    printf("String after memset: %s\n", str);
}

void fn15_strpbrk(char* str) {
      char* result = strpbrk(str, "aeiou");
    if (result != NULL)
        printf("First vowel found: %c\n", *result);
    else
        printf("No vowels found\n");
}

void fn16_strstr(char* str) {
       char* result = strstr(str, "tu");
    if (result != NULL)
        printf("Substring found: %s\n", result);
    else
        printf("Substring not");
}
    

void fn17_strcoll(char* str) {
    
}

void fn18_strerror(char* str) {
    // Implementation for strerror
}

void fn19_strxfrm(char* str) {
    // Implementation for strxfrm
}

void fn20_strdup(char* str) {
    // Implementation for strdup
}

void fn21_strndup(char* str) {
    // Implementation for strndup
}

void fn22_strcasecmp(char* str) {
    // Implementation for strcasecmp
}
