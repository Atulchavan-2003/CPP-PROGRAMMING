#include<stdio.h>
typedef struct Time {
	int hrs;
	int min;
	int sec;
} Time;

void store(Time*,int);
void display(Time*,int);

void main() {
	int n = 2;
	Time t1[n],result;

	store(t1,n);
	display(t1,n);
	addition(t1,n,result);


}// main end here
addition(Time* t1,int n){
     Time result;
    int total_sec, carry;

    // Add seconds
    result.sec = t1[0].sec + t1[1].sec;
    carry = result.sec / 60;
    result.sec %= 60;

    // Add minutes
    result.min = t1[0].min + t1[1].min + carry;
    carry = result.min / 60;
    result.min %= 60;

    // Add hours
    result.hrs = t1[0].hrs + t1[1].hrs + carry;

    return result;

}
void store(Time* t1,int n) {

	for(int i=0; i<n; i++) {
		printf("Enter the Time (hrs, min, sec): %d \n",i+1);
		scanf("%d", &t1[i].hrs);
		scanf("%d", &t1[i].min);
		scanf("%d", &t1[i].sec);
	}

}//store function end here

void display(Time* t1,int n) {
	for(int i=0; i<n; i++) {
    	printf("display time :%d \n",i+1);
		printf("hrs is :%d\n",t1[i].hrs);
		printf("min is :%d\n",t1[i].min);
		printf("sec is :%d\n\n",t1[i].sec);
	}
}
