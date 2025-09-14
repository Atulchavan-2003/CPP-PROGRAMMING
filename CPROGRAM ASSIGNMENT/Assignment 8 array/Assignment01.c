/*1. find minimum and maximum number in array*/
#include<stdio.h>
void main (){
	int n=4;
	int arr[n];
	printf("Enter the arr :\n");
	for( int i= 0;i<n-1;i++){	
		scanf("\n %d",&arr[i]);
	}
	for(int i = 0;i<n-1;i++){    	
	  printf(" %d  ",arr[i]);
	}
 	int min = arr[0];
 	int max = arr[0];
	for(int i= 0;i<n-1;i++){
		if(arr[i]>min){
			min=arr[i];
		}	
		if(arr[i]<min){
			min=arr[i];
		}	
	}
			printf("minimum:= %d maximum:= %d",min,max);
}