// contvert into farmat
#include<stdio.h>
typedef struct Time {
	int hrs;
	int min;
	int sec;
} Time;
void store(Time*);
void display(Time*);
void format(Time*);

void main() {

	Time t1;

	store(&t1);
	display(&t1);
	format(&t1);
	printf("hrs is : %d\n min is %d \n sec is %d",t1.hrs,t1.min,t1.sec);

}// main end here
void format(Time* t1) {
     int carry=0;
    carry=t1->sec/60;   //
    t1->sec= t1->sec%60;
    t1->min+=carry;
    
    t1->hrs+=t1->min/60;
    
    t1->min=t1->min%60;
    
    
}
void store(Time* t1) {


	printf("Enter the Time (hrs, min, sec): \n");
	scanf("%d", &t1->hrs);
	scanf("%d", &t1->min);
	scanf("%d", &t1->sec);


}//store function end here

void display(Time* t1) {

	printf("display time : \n");
	printf("hrs is :%d\n",(*t1).hrs);
	printf("min is :%d\n",(*t1).min);
	printf("sec is :%d\n\n",(*t1).sec);

}
