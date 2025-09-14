/*5. Write a menu driven program to take a number for user and perform operations as follows.

Press 1.To check number is even or odd.
2.To check number is prime or not.
3.To check number is pallindrome or not.
4.To check number is positive, negative or zero.
5.To reverse a number.
6.To find sum of digits.*/
#include<stdio.h>
void main(){
	int press, n;
	printf("Press 1.To check number is even or odd.\n 2.To check number is prime or not.\n 3.To check number is pallindrome or not.\n 4.To check number is positive, negative or zero.\n5.To reverse a number.\n 6.To find sum of digits.");
	printf("please press the number \n");
	scanf("%d",&press);
	
	if(press == 1){
			// check number is even or odd
		printf("enter number \n");
		scanf("%d",&n);
		if( n % 2 == 0 )
			printf("even number");
		else
			printf("odd number");	
	}
	else if(press == 2){
		  int n2;
			// check number prime or not
		printf("enter number \n");
		scanf("%d",&n2);
		int flag=0;
		for(int i=2 ;i<n2;i++){
			 if(n2%i==0){
			 	flag++;
			 }
		}
		if(flag == 0)
			printf("prime number");
		else 
			printf("not prime number");	
	}
	else if(press == 3){
			// pallindrome or not
		int rem3,tem3,n3,sum3 = 0; 
		printf("enter number \n");
		scanf("%d",&n3);
		    tem3 = n3;
		// 121
		while(n3 > 0){
			rem3 = n3 % 10;
			sum3 = sum3*10+rem3;
			n3=n3/10;
		}
	
		if (tem3 == sum3 )
			printf("pallindrome %d ",sum3);
		else
			printf("not pallindrome %d ", sum3 );
			
	}
	else if(press == 4){
			// positive negative or zero
			int n4;
			char ch;
			if (){
				
			}
		printf("enter number \n");
		scanf("%d",&n4);
		if(n4 > 0)
			printf("positive ");
	 	else if (n4 == 0)
		 	printf("zero ");	
		else if (n4<0)
		 	printf("negative ");
		else if ( n4>='a' && n4<='z')
		
		printf("enter valid input");
		 	
	}
   	else if(press == 5){
   		int n5;
			// reverse number
		
		int rem5,o,sum5 = 0; 
		printf("enter number \n");
		scanf("%d",&n5);
		    
		// 121
		int count =0;
		while(n5>0){
			rem5=n5%10;
			count++;
			n5=n5/10;
		}
		while(n5 > 0){
			rem5 = n5 % 10;
			for(int i=1;i<=count;i++){
			  sum5 = sum5*10+rem5;
			}
			n5=n5/10;
		}
		printf("sum %d",sum5);
			
	}
  	else if(press == 6){
			// sum of digit
			int n6,sum6=0;
		printf("enter number \n");
		scanf("%d",&n6);
		for (int i = 1;i <= n6;i++){
			      sum6 = sum6+i;
		}
		printf(" sum of digit %d",sum6 );
		
			
	}
	
	else
	 printf("invalide number");
}