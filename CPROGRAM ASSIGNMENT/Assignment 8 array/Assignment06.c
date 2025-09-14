/*accept array and print only prime number of array*/
#include<stdio.h>
void main(){
	int arr[10];
	printf("Enter the array\n");
	for(int i = 0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(int i = 0;i<5;i++){
		 int count=0;
		for(int j = 1;j <=arr[i];j++){
			if(arr[i]%j==0){
				
				count++;
			}
		}
		if(count==2)
			printf("%d ",arr[i]);
	}
	
} 