/*5. Write a menu driven program to take a number for user and perform operations as follows.

Press 1.To check number is even or odd.
2.To check number is prime or not.
3.To check number is pallindrome or not.
4.To check number is positive, negative or zero.
5.To reverse a number.
6.To find sum of digits.*/
#include<stdio.h>

int get_even_or_odd(int);
int check_prime(int);
int get_pallindrome(int);
int get_pasitive_or_nagative(int);
int get_reverse(int);
int get_sum(int);

void main(){
	int press, n;
	
	printf("Press 1.To check number is even or odd.\n 2.To check number is prime or not.\n 3.To check number is pallindrome or not.\n 4.To check number is positive, negative or zero.\n5.To reverse a number.\n 6.To find sum of digits.");
	printf("\n please press the number \n");
	scanf("%d",&press);
	
	if(press == 1){
		printf("enter number \n");
		scanf("%d",&n);
		get_even_or_odd(n);
	}
	
	else if(press == 2){
		  int n2;
			// check number prime or not
		printf("enter number \n");
		scanf("%d",&n2);
		check_prime(n2);
	}
	else if(press == 3){

			// pallindrome or not
		printf("enter number \n");
		scanf("%d",&n);
		get_pallindrome(n);
			
	}
	else if(press == 4){
			// positive negative or zero
			int n4;
		printf("enter number \n");
		scanf("%d",&n4);
		get_pasitive_or_nagative(n4);
		
	}
   	else if(press == 5){
   		int n5;
			// reverse number
		
		printf("enter number \n");
		scanf("%d",&n5);
		    get_reverse(n5);
	}
  	else if(press == 6){
  		int n6;
			// sum of digit
		printf("enter number \n");
		scanf("%d",&n6);
		get_sum(n6);	
	}
	
	else
	 printf("invalide number");
}//main end here
int get_even_or_odd(int n){
	
			// check number is even or odd
		if( n % 2 == 0 )
			printf("even number");
		else
			printf("odd number");	
}
int check_prime(int n2){
		int flag=0;
		for(int i=2 ;i<n2/2;i++){
			 if(n2%i==0){
			 	flag++;
			 }
		}
		if(flag == 0)
			printf("prime number");
		else 
			printf("not prime number");	
}
int get_pallindrome(int n3){
		int rem3,tem3,sum3 = 0; 
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
 int get_pasitive_or_nagative(int n4){
		if(n4 > 0)
			printf("positive ");
	 	else if (n4 == 0)
		 	printf("zero ");	
		else if (n4<0)
		 	printf("negative ");
		else
		printf("enter valid input");
		 	
 }		
 int get_reverse(int n5){
		// 121
		int rem,res=0;
		int temp=n5;
	while(n5>0){
		rem= n5%10;
		 res=res*10+rem;
		n5=n5/10;
	}

	   printf("hello %d",res);
			
 }
int get_sum(int n6){
 	
			int sum6=0;
		for (int i = 1;i <= n6;i++){
			      sum6 = sum6+i;
		}
		printf(" sum of digit %d",sum6 );
		
 }