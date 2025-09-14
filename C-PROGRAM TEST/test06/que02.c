
#include <stdio.h>

void main() {
	int arr[] = {1, 5, 4, 7, 6};
	int size = sizeof(arr) / sizeof(arr[0]);
	int max = arr[0], maxIndex = 0;

	// Find max and its index
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
			maxIndex = i;
		}
	}

	// Remove max
	for (int i = maxIndex; i < size - 1; i++) {
		arr[i] = arr[i + 1];
	}
	size--;

	printf("First max: %d\n", max);

	// Find second max
	max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	printf("Second max: %d\n", max);
}
