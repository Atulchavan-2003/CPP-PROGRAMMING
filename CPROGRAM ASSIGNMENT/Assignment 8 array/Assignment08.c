/*8. Merge two arrays*/
#include<stdio.h>
void main(){
	int arr[5],brr[5],crr[5];
	printf("Enter the arr\n");
	for(int i=0;i<3;i++){
		scanf("%d",&arr[i]);
	    crr[i]=arr[i];
	}
	printf("Enter the brr\n");
	for(int i=3;i<3*2;i++){
		scanf("%d",&brr[i]);
		crr[i]=brr[i];
	}
	crr[0];
	printf("Third array : = {");
	for (int i= 0;i<3*2;i++){	
		printf("%d,",crr[i]);
	}
	printf("}");
}