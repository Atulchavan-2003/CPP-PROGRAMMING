#include<stdio.h>
void main() {
	int x,y;

	int arr[6]= {11,23,30,21,45,50};

   printf("Enter the x position  {11,23,30,21,45,50} \n");
	scanf("%d",&x);
	printf("Enter the y position ");
	scanf("%d",&y);
	   int tem = arr[x];
	   arr[x]=arr[y];
	   arr[y]=tem;
	   
	for(int i=0; i<6; i++) {
		printf("%d ",arr[i]);
	}
}