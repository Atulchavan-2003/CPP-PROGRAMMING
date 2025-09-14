//print strong number in the range 1 to n
#include<stdio.h>
int get_strong(int);
void main(){
	 int m;
	 printf("enter the number");
	 scanf("%d",&m);
}  
int get_strong(int m){
	for(int j=1;j<=m;j++){
	
		int n = j,rem;
		int temp = n;
		int sum2 =0;
		while(n>0){
			rem = n%10;
			int sum = 1;
			for(int i=1;i< rem;i++){
				sum = sum+sum*i;
			}
			sum2=sum2+sum;
			n = n /10;
		}
		 if(sum2== temp)
			printf("%d  ",sum2);
    }
}