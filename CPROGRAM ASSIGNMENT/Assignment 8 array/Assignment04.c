/*find odd and even among the number.*/
#include<stdio.h>
void main (){
	int arr[10];
	printf("Enter the array\n");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("even number :");
	for(int i=0;i<5;i++){
		if(arr[i]%2==0){
			printf(" %d ",arr[i]);
		}
	}
	printf("Odd number :");
	for(int i=0;i<5;i++){
		if(arr[i]%2!=0){
			printf(" %d",arr[i]);
		}
	}
	
}