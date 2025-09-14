/*3. Print perfect numbers in the given range 1 to n.*/
#include <stdio.h>
int get_perfect(int);
void main() {
	int m;
	printf("Enter the number");
	scanf("%d",&m);
	get_perfect(m);
}
int get_perfect(int m){
   for(int j =1;j<=m;j++){
   
   	int n = j,sum=0,tem,count = 0;
	   tem = n;

	for (int i = 1;i < n;i++){
		  if (n % i==0)
		  sum = sum+i;
	}
	if (sum == tem)
	printf("%d \n",sum);
	
  }
}