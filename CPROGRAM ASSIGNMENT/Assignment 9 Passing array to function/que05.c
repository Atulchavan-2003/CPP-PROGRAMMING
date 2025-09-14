/*5.print alternate elements in array.*/
#include <stdio.h>

void printAlternate(int* arr, int n) {
    printf("Alternate elements in array: ");
    for (int i = 0; i < n; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main() {
    int arr[100];
    int n = 5;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printAlternate(arr, n);  // Function call
}
