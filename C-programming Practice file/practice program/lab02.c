/*display,search,delete,max,min*/
#include<stdio.h>
void display(int*,int);
void main() {

	int arr[]= {1,2,3,4,5,6};
	int size = sizeof(arr)/4;
	//printf("%d",size);


	int no,num;
	printf("press 1 to display\npress 2 to search\npess 3 to delete element \n");
	scanf("%d",&num);
	printf("enter the number do you want");
	scanf("%d",&no);

	if(num==1) {
		display(arr,size);
	}
	if(num==2) {
		search(arr,size,no); //calling  search function
	}
	if(num==3) {
		deleteelement(arr,size,no);
	}
}
deleteelement(int* arr,int size, int no) {
	int flag = 0;
	for(int i=0; i<size; i++) {
		if(arr[i]==no) {
			for(int j=i; j<size; j++) {
				flag=1;
				arr[j]=arr[j+1];
			}
		}
        size--;
	if(flag == 1)
		break;
	}

	printf("after deleting the element \n");
	for(int k = 0; k<size+1; k++) {
		printf("%d ",arr[k]);
	}
}
void display(int* arr,int size) {
	printf("Display := ");
	for(int i= 0; i<size; i++) {
		printf("%d ",arr[i]);
	}
}
search(int* arr,int size,int no ) {
	int index= -1;
	for(int i=0; i<size; i++) {
		if(arr[i]==no) {
			index = i;
		}
	}
	if(index== -1) {
		printf("not found");
	} else {
		printf("intde at %d found",index);
	}
}