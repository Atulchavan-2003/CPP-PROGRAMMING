#include<stdio.h>
void main() {
	int n;
	int size =9;
	int arr[9]= {500,200,100,50,20,10,5,2,1};
	printf("Enter the rupeis do you have");
	scanf("%d",&n);
	int note = 0;


	for(int i=0; i<size; i++) {

		note = n / arr[i];

		if(note!=0) {
			printf(" Note of %d : %d \n",arr[i],note);
			n=n%arr[i];
		}

	}
}