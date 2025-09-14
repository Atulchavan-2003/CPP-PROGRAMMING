/*2. search the given number in array*/
#include <stdio.h>


void searchNumber(int* arr, int n, int no) {
    int temp[n];     
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == no) {
            temp[index] = i;
            index++;
        }
    }

    if (index == 0) {
        printf("Number %d not found in the array.\n", no);
    } else {
        for (int i = 0; i < index; i++) {
            printf("Found at index %d\n", temp[i]);
        }
    }
}

void main() {
    int n = 5;
    int arr[n];

    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int no;
    printf("\nEnter the number to search: ");
    scanf("%d", &no);

    // Call the search function
    searchNumber(arr, n, no);
}
