/*05 Accept the price from user.if he is a strdent (user may say y or n).if he is a student 
and he has purchased more than discount is 20% othewise 
discount is 10%.But if he is not a student then if he has purchaed nore than 600
discount is 15% othewise there is not discount*/
#include<stdio.h>
int isstudent(char,double);
void main()
{
	double price;
	char choice;
	
	printf("Enter price");
	scanf("%lf",&price);
	
	fflush(stdin);
	printf("Are you a student y or n");
	scanf(" %c",&choice);
	
	 isstudent(choice,price);   //function calling

	
}
int isstudent(char choice,double price){
    double total;
	if(choice=='y'){
		if(price>500){
			total = price-price*0.15;
			printf("Total price is %lf",total);
		}
		else{
			total = price-price*0.10;	
			printf("Total price is %lf",total);
		}
	}
	else{
		if(price>600){
			total = price-price*0.10;
			printf("Total price is %lf",total);
		}
		else{			
			printf("NO Discount");
		}
	}
}