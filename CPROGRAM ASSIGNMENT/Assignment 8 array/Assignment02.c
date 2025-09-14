/*2. search the given number in array*/
#include<stdio.h>
void main () {
	int n=5;
	int arr[n];
	printf("Enter the arr\n");
	for(int i=0; i< n; i++) {
		scanf("%d",&arr[i]);
	}
	printf("array:= ");
	int no,temp[n],index = 0;
	printf("search the given number");
	scanf("%d",&no);
	for(int i=0; i< n; i++) {
		if(arr[i]==no) {
			temp[index]=i;
			index++;
		}
	}
	for(int i= 0;i<index;i++){
		printf("found at %d index ",temp[i]);
	}
}