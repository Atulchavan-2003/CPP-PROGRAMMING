/*Reverse the given array.*/
#include<stdio.h>

void printReverse(int arr[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main() {
    int rev[5];
    printf("Enter the array\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &rev[i]);
    }

    printf("Reversed array: ");
    printReverse(rev, 5);
}
