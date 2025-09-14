/*accept array and print only prime number of array*/
#include <stdio.h>

#include<stdio.h>

int isPrime(int num) {
    int count = 0;
    for (int j = 1; j <= num; j++) {
        if (num % j == 0) {
            count++;
        }
    }
    if (count == 2)
        return 1;
    else
        return 0;
}

void main(){
    int arr[10];
    printf("Enter the array\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 5; i++){
        if(isPrime(arr[i])){
            printf("%d ", arr[i]);
        }
    }
}
