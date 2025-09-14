#include <stdio.h>

void main() {
    int arr[100] = {1, 2, 1,2}; 
    int n = 3;  
    int flag = 0;

    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            flag = 1;  
            break;
        }
    }

    if (flag == 1)
        printf("Not Palindrome\n");
    else
        printf("Palindrome\n");
}
