/*1. employee (id, name sallary)*/
#include<stdio.h>
struct Admin {
	int id;
	char name[20];
	int salary;
	int allowance;
};
void main(){
	struct Admin s1;
	
	printf(" Enter the employee id \n Enter the employee name \n Enter the employee salary \n Enter the employee allowance\n");
	
    scanf("%d",&s1.id);
    scanf("%s",&s1.name);
    scanf("%d",&s1.salary);
    scanf("%d",&s1.allowance);
    
    printf("id : %d, name : %s, salary : %d, allowance : %d \n",s1.id,s1.name,s1.salary,s1.allowance);
 
    
}
