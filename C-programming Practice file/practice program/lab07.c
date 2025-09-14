/*create a array of 5 employee and id name*/
#include<stdio.h>
#include<stdio.h>
typedef struct employees {
	int id;
	char name[20];
	int salary;
} employees;

void display_search(employees*,int );
void storeemp(employees*,int);

void main() {
	int n =2;
	employees sarr1[n],sarr2[4],sarr3[n];
	
	printf("enter employees details 1");
	storeemp(sarr1, n);
	display_search(sarr1,n);
	
	printf("enter employees details 1");
	storeemp(sarr2, n);
	display_search(sarr2,n);
	
	printf("enter employees details 1");
	storeemp(sarr3, n);
	display_search(sarr3,n);
	
}

void storeemp(employees *sarr,int n){
	for(int i=0; i<n; i++) {
		printf("Enter the employees id,name,salary %d ",i+1);
		scanf("%d",&sarr[i].id);
		scanf("%s",&sarr[i].name);
		scanf("%d",&sarr[i].salary);
	
	}
}

void display_search(employees* sarr,int n){
	
	int no;
	printf("search id do you want");
	scanf("%d",&no);
	
	for(int i=0; i<n; i++) {
	     if(sarr[i].id == no)
		printf("%d : %s : %d :",sarr[i].id,sarr[i].name,sarr[i].salary);
	
	}

}
