#include<stdio.h>
void main(){
	int n,p,paw=1;
	printf("Enter the n number");
	scanf("%d",&n);
	printf("Enter the power");
	scanf("%d",&p);
	
	for(int i = 1;i<=p;i++){
		 paw=paw*n;
	}
	printf("%d ",paw);
}