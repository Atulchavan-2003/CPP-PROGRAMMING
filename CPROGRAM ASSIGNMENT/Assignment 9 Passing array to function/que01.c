#include <stdio.h>

void findMinMax(int* arr, int n) {
	int min = arr[0];
	int max = arr[0];
	printf("\n before : Minimum := %d\nMaximum := %d\n", min, max);
	for (int i = 1; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}

	printf("\nMinimum := %d\nMaximum := %d\n", min, max);
}

void main() {
	int n = 4;
	int arr[n];

	printf("Enter the array elements:\n");
	for (int i = 0; i < n; i++) {  //  loop should run to i < n
		scanf("%d", &arr[i]);
	}

	printf("Array elements: ");
	for (int i = 0; i < n; i++) {
		printf("%d  ", arr[i]);
	}

	findMinMax(arr, n);  // Passing array and size to function
}
