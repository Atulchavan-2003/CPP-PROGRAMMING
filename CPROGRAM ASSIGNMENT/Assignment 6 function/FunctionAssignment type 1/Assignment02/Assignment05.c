#include<stdio.h>
void choice();
void main()
{
	choice();
}
void choice(){
	double price;
	char choice;
	
	printf("Enter price");
	scanf("%lf",&price);
	
	fflush(stdin);
	printf("Are you a student y or n");
	scanf("%c",&choice);
	double totalprice;
	if(choice=='y')
	{
		
		if(price>500)
			totalprice=price-price*0.15;
		else
			totalprice=price-price*0.10;	
				
	}
	else
	{
		if(price>600)
			totalprice=price-price*0.10;
		else
			totalprice=price;	
		
		
	}
	printf("Total price is %lf",totalprice);
}