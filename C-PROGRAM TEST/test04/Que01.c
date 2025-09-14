#include<stdio.h>
void main(){
	int start,end,range;
	printf("Enter the start number");
	scanf("%d",&start);
	printf("Enter the end number");
	scanf("%d",&range);
     for(int i=start;i<=range;i++){
		for(int j = 1;j<=range;j++){
			  if(i%j==0){
			  	printf("%d ",j);
			  }
		}
			  printf("\n");
	 }  

}