/*6. Print a half pyramid using numbers
Input: n = 5*/
#include <stdio.h>
void main(){
	int i,j,n=5;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf(" %d",j);
		}
		printf("\n");
	}
}