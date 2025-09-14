 /*1. Print armstrong numbers in the given range 1 to n.*/
#include<stdio.h>
int get_armstrong(int);
void main() {
	//1234
	int dot;
	scanf("%d",&dot);
	get_armstrong(dot);
}
int get_armstrong(int dot){
  for(int j =1;j<=dot;j++){
  
  
	int n = j,tem,sum2=0,rem;
	tem = n;
	int count = 0;
	while (n > 0) {
		rem = n%10;
		count++;
		n = n / 10;
	}
	   n = tem;
 	while(n > 0 ){
 		rem = n % 10;
 		int res = 1;
 		for(int i=1 ;i<=count;i++){
 		 	res=res*rem;
		}
		 
		   sum2 +=res; 
		n = n / 10;	
	}
	if(tem == sum2)
		  printf(" armstrong number := %d \n ",sum2);

 }
}