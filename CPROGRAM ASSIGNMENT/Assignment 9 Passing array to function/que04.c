/*4.find odd and even among the number.*/
#include <stdio.h>

void printEven(int* arr, int n) {
    printf("Even numbers: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void printOdd(int* arr, int n) {
    printf("Odd numbers: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void main() {
    int arr[10];
    int n = 5;

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printEven(arr, n);  // Function to print even numbers
    printOdd(arr, n);   // Function to print odd numbers
}
