#include<stdio.h>
void main(){
	int arr[]={1,2,3,4,5};
	int size= sizeof(arr)/4;
	int brr[]={1,6,7,3,2};
	for(int i = 0;i<size;i++){
		 for(int j = 0;j<size;j++){
			if(arr[i]==brr[j]){
				printf("%d",arr[i]);
			}
		 }
	}
}