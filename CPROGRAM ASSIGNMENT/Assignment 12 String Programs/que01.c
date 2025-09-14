/*1. Write a program to scan string from user then scan a single character and search it
in a accepted string.*/
#include <stdio.h>
int main() {
    char str[100], n;
    printf("Enter the name: ");
    scanf("%s", str);

    printf("Which character do you want to search: ");
    scanf(" %c", &n);

    getsearch(str, n);
    
}


void getsearch(char *str, char n) {
    int found = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == n) {
            if (!found) {
                printf("'%c' found at positions: %d", n, i);
            } else {
                printf(", %d", i);
            }
            found = 1;
        }
    }
    if (found==1) {
        printf("\n");
    } else {
        printf("Character '%c' not found in \"%s\"\n", n, str);
    }
}
