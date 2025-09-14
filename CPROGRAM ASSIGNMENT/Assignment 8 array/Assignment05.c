/*5.print alternate elements in array.*/
#include<stdio.h>
void main(){
	int arr[100],sum=0;
	printf("Enter the array\n");
	for(int i = 0;i< 5;i++){
		scanf("%d",&arr[i]);
	}
	printf("alternate of all number := ");
	for(int i = 0;i<5;i++){
		printf("%d ",arr[i]);
		i++;
	}
	
}