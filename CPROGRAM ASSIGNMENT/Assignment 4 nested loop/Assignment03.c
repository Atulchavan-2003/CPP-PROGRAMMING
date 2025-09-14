/*3. Print perfect numbers in the given range 1 to n.*/
#include <stdio.h>
void main() {
	int m;
	printf("Enter the number");
	scanf("%d",&m);
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