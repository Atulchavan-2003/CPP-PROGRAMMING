/*1. Create a structure Book with data members as bname, id, author, price. Accept the
values of all these members from user and display them.*/
#include<stdio.h>

typedef struct book {
	char nameb[100];
	int id;
	char author[100];
	float price;

} book;
void storeArray(book*,int);
void display(book*,int);

void main () {
	int n=2;
   struct book s1[n];

	storeArray(s1,n);
	display(s1,n);

}//main end here
void storeArray(book* ptr,int n) {
	for(int i=0; i<n; i++) {
	printf("\nEnter the details of book %d (name, id, author, price):\n", i + 1);
		scanf("%s",ptr[i].nameb);
		scanf("%d",&ptr[i].id);
		scanf("%s",ptr[i].author);
		scanf("%f",&ptr[i].price);
	}
} //store function end here

void display(book* ptr,int n) {
	for(int i=0; i<n; i++) {
		
		printf("book name :%s \n",ptr[i].nameb);
		printf("id        :%d \n",ptr[i].id);
		printf("author    : %s\n",ptr[i].author);
		printf("price     : %f\n",ptr[i].price);
	}
}