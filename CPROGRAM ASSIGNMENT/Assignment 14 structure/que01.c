/*1. student (rollno, name marks)*/
#include<stdio.h>
struct student {
	int rollno;
	char name[20];
	int mark;
};
void main(){
	struct student s1,s2,s3;
	
	printf("Enter the student roll number ");
    scanf("%d",&s1.rollno);
    printf("Enter the student name");
    scanf("%s",&s1.name);
    printf("Enter the student mark");
    scanf("%d",&s1.mark);
    
	printf("Enter the second student roll number ");
    scanf("%d",&s2.rollno);
    printf("Enter the student name");
    scanf("%s",&s2.name);
    printf("Enter the student mark");
    scanf("%d",&s2.mark);
    
    printf("Enter the second student roll number ");
    scanf("%d",&s3.rollno);
    printf("Enter the student name");
    scanf("%s",&s3.name);
    printf("Enter the student mark");
    scanf("%d",&s3.mark);
    
    printf("roll number : %d \nname : %s \nmark : %d\n",s1.rollno,s1.name,s1.mark);
    printf("roll number : %d \nname : %s \nmark : %d\n",s2.rollno,s2.name,s2.mark);
    printf("roll number : %d \nname : %s \nmark : %d\n",s3.rollno,s3.name,s3.mark);
    
}
