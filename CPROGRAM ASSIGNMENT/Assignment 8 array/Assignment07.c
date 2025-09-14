/*7.take two array and add sum in third array.*/
#include<stdio.h>
void main(){
	int arr[5],brr[5],crr[5];
	printf("Enter the arr\n");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the brr\n");
	for(int i=0;i<5;i++){
		scanf("%d",&brr[i]);
	}
	crr[0];
	printf("Third array : = {");
	for (int i= 0;i<5;i++){
		crr[i]=arr[i]+brr[i];
		printf("%d,",crr[i]);
	}
	printf("}");
}