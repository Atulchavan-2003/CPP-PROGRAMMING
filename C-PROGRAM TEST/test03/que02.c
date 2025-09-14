#include<stdio.h>
void main(){
	int start,end;
	printf("Enter the start number");
	scanf("%d",&start);
	printf("Enter the end number");
	scanf("%d",&end);
	int sum = 0;
	for(int i= start;i<= end; i+=2){
		sum += i;
	}
	printf("%d",sum);
}