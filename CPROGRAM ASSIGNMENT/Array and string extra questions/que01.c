
#include <stdio.h>

// Function to merge two sorted arrays
void mergeArrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int i = 0, j = 0, k = 0;

    // Merge arrays until one is exhausted
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j])
            result[k++] = arr1[i++];
        else
            result[k++] = arr2[j++];
    }

    // Copy remaining elements of arr1
    while (i < n1)
        result[k++] = arr1[i++];

    // Copy remaining elements of arr2
    while (j < n2)
        result[k++] = arr2[j++];
}

int main() {
    int arr1[]={1,3,5};
	int arr2[]={2,4,6};
	int result[200];
    int n1=3, n2=3;

    // Merging the arrays
    mergeArrays(arr1, n1, arr2, n2, result);

    // Output merged array
    printf("Merged Sorted Array:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
