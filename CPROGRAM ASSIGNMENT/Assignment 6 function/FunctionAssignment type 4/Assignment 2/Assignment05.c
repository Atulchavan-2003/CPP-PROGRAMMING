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
	
	double total = isstudent(choice,price);   //function calling

	if(total == price){
		printf("No Discount");
	}
	else
	printf("Total price is %lf",total);
}
int isstudent(char choice,double price){
	
	if(choice=='y')
	{
		
		if(price>500)
			return price-price*0.15;
			
		else{
			return price-price*0.10;	
		}
				
	}
	else{
		if(price>600){
			return price-price*0.10;
			
		}
		else{
			return price;			
		}
	}
	
}