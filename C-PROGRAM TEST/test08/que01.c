#include<stdio.h>
#include<string.h>
void main(){
	
	int p1[]={12345678,87654321};
	int len= strlen(p1);
	
	cheack_pass(p1,len);
	
}
cheack_pass(int* ptr,int len){
	
	int password;
	int user_id;
	
	printf("Enter the user id");
	scanf("%d",&user_id);
	
	printf("user id is :%d \n",user_id);
	
	printf("Enter the password\n");
	scanf("%d",&password);
	int flag = 0;
	for(int i=0;i<len;i++){
		if(ptr[i]==password)
	        flag =1;
	}
	if(flag == 1)	
			printf("password is verified");
	else
	   printf("failed");
}