/*8. Merge two arrays*/
#include <stdio.h>
void mergeArrays(int arr[], int brr[], int crr[]) {
   
    for (int i = 0; i < 3; i++) {
        crr[i] = arr[i];
    }
   
    for (int i = 3; i < 6; i++) {
        crr[i] = brr[i];
    }
}

void main() {
    int arr[5], brr[5], crr[5];

    printf("Enter the arr\n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the brr\n");
    for (int i = 3; i < 6; i++) {
        scanf("%d", &brr[i]);
    }

    mergeArrays(arr, brr, crr);

    printf("Third array := {");
    for (int i = 0; i < 6; i++) {
        printf("%d,", crr[i]);
       
    }
    printf("}\n");
}
