/*Reverse the given array.*/
#include<stdio.h>
void main(){
	int rev[5];
	printf("Enter the array\n");
	for(int i=0;i<5;i++){
		scanf("%d ",&rev[i]);
	}
//	for(int i=0;i<5;i++){
//		printf("%d ",rev[i]);
//	}
		for(int i=4;i>=0;i--){
		printf("%d ",rev[i]);
	}
}