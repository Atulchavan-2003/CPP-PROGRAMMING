/*5. salesManager (id,name,salary,insentive,target)*/
#include<stdio.h>
struct manager{
	int id;
	char name[20];
	int salary;
	int insentive;
	int target;
};
struct manager atul(struct manager stu){
	
	printf(" Enter the  id \n Enter the name \n Enter the salary \n Enter the insentive and target\n");
	
    scanf("%d",&stu.id);
    scanf("%s",&stu.name);
    scanf("%d",&stu.salary);
    scanf("%d",&stu.insentive);
    scanf("%d",&stu.target);
    return stu;
}
void display(struct manager s1){
	
    printf("id : %d, name : %s, salary : %d, allowance : %d \n",s1.id,s1.name,s1.salary,s1.insentive,s1.target);
}
    
void main(){
	struct manager s1,s2,s3;
     s1=atul(s1);
     s2=atul(s1);
     s3=atul(s1);
     
     display(s1);
     display(s2);
     display(s3);
    
}
