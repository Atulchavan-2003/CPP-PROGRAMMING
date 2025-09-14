/*5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he
is a student and he has purchased more than 500 than discount is 20% otherwise
discount is 10%.But if he is not a student then if he has purchased more than 600
discount is 15% otherwise there is not discount.*/
#include <stdio.h>
void main() {
	int price,d;
	char p ='n' ;

	printf("enter the price");
	scanf(" %d",&price);
 
//	printf("Are you a student \n");
//	scanf(" % c",&p);

	if (p == 'y') {
		if(price <= 500) {
			d = price / 100 * 20;
			printf("%d",d);
			d=price-d;
			printf(" discount price : = %d",d);
		}
		else{
			d = price / 100 * 10;
			printf("%d",d);
			d=price-d;
			printf(" discount price : = %d",d);
		}
	} 
	else  {
		if(price <= 600){
		
			d = price / 100 * 15;
			printf("%d",d);
			d=price-d;
			printf(" discount price : = %d",d);
    	}
		else{
    		printf("no discount");
		}
   
	}
       
}

