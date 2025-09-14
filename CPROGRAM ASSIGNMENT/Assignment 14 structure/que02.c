/*2. employee (id, name sallary)*/
#include<stdio.h>
struct employees {
	int id;
	char name[20];
	int salary;
};
void main(){
	struct employees s1,s2;
	
	printf("Enter the employee id ");
    scanf("%d",&s1.id);
    printf("Enter the employee name");
    scanf("%s",&s1.name);
    printf("Enter the employee salary");
    scanf("%d",&s1.salary);
    
	printf("Enter the second employee ");
    scanf("%d",&s2.id);
    printf("Enter the employee name");
    scanf("%s",&s2.name);
    printf("Enter the employee sallary");
    scanf("%d",&s2.salary);
    
    printf("id : %d name : %s salary : %d \n",s1.id,s1.name,s1.salary);
    printf("id : %d name : %s  salary : %d ",s2.id,s2.name,s2.salary);
    
}
