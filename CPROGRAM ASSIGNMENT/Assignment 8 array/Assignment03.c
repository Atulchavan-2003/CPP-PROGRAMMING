/*3.find sum of all numbers.*/
#include<stdio.h>
void main(){
	int arr[100],sum=0;
	printf("Enter the array\n");
	for(int i = 0;i< 5;i++){
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i<5;i++){
	       sum+=arr[i];
	}
	printf("sum of all number := %d",sum);
	
}