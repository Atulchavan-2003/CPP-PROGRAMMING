/*create a array 
with scanf,display,find max, sum of number and revers number */
#include<stdio.h>
void main(){
	int n;
	printf("Enter the size");
	scanf("%d",&n);
     int arr[5];
     printf(" Enter the arr ");
     for(int i=0;i<n;i++){
	 	scanf(" \n %d ",&arr[i]);
	 }
	 printf("ho");
	 for(int i=0;i<n;i++){

     	printf(" %d",arr[i]);
	 }
	 int max=arr[0];
	 int min=arr[0];
	 
	 for(int i=0;i<5;i++){
	 	if(arr[i]>max)
	    	max=arr[i];
	 	if(arr[i]<max)
	    	max=arr[i];
	 }
     	printf(" mi number %d \n max %d",min,max);
     	
     	printf("\n Enter element you want to search");
     
	
  	   	
}