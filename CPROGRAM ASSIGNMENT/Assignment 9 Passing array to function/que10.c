#include<stdio.h>
#include <stdio.h>

// Function to perform bubble sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int flag = 0;
        for (int j = 0; j < size - 1 - i; j++) {
            int temp = 0;
            if (arr[j] > arr[j + 1]) {
                flag = 1;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        // Print array after each pass
        for (int k = 0; k < size; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");

        if (flag == 0)
            break;
    }
}

void main() {
    int arr[] = {5, 3, 1, 8, 9, 7, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Initial array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\nSorting process:\n");

    bubbleSort(arr, size);  // Calling the function

    printf("\nFinal sorted array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
