#include<stdio.h>
int storeArray(int*,int );
int displayArray(int*,int);
int replace(int*,int,int);
void main(){
	int size = 5;
	int arr[size];
	printf("Enter the array");
	storeArray(&arr,size);
 	displayArray(arr,size);
     replace(arr,size,7);
}
int storeArray(int* arr, int size ){
	
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
}
int displayArray(int* arr,int size){
	      printf("{");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("}\n"); 
}
int replace(int* arr, int size, int s){
		printf("{");
	for(int i=0;i<size;i++){
		if(arr[i]==5){
			arr[i]=s;
		}
		printf("%d ",arr[i]);
	}
	printf("}");
}

