#include<stdio.h>
void main(){
    int start,end;
	printf("Enter the start number");
	scanf("%d",&start);
	printf("Enter the end number");
	scanf("%d",&end);
	printf("even :");
		for( int i = start;i<=end;i++){
			 if (i%2==0)
			 	printf(" %d ",i);
		}
		printf("\n odd:");
		for( int i = start;i<=end;i++){
		
			 if (i%2!=0)
			 	printf(" %d ",i);
		}
}