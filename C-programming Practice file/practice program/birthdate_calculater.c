// birth date calculater
#include<stdio.h>
void main(){
	int birth_date,birth_month,birth_year;
	int current_date = 06,current_month=07,current_year=2025;
	printf("Enter birth date");
	scanf("%d",&birth_date);
	printf("Enter birth month");
	scanf("%d",&birth_month);
	printf("Enter birth year");
	scanf("%d",&birth_year);
	
			if(birth_year>current_year){
				current_year+=1;
				printf("hello");
			} 
			else if(2000>birth_year){
				current_year+=1-1;
				printf("hello2");
			}
			else{
				current_year-=1;
				printf("hello3");
			}
		
			if(birth_month>current_month){
				
				if(birth_month==current_month)
					current_month+=12;
				else
					current_month-=12;	
			}
			
	        if (birth_date>=current_date){
	        	current_date =current_date-30;
			}
			
			    birth_year  =current_year-birth_year;
			    birth_month =current_month-birth_month;
			    birth_date  =current_date-birth_date;
			  
			     
			     printf("year := %d month:= %d day:= %d",birth_year,birth_month,birth_date);
}