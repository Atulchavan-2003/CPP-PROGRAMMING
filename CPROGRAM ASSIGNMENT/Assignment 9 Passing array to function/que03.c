/*3.find sum of all numbers.*/
#include <stdio.h>

// Function to calculate sum
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

void main() {
    int arr[100];
    int n = 5;

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int total = sumArray(arr, n);

    printf("Sum of all numbers := %d\n", total);
}
