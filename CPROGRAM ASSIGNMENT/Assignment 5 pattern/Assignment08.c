/*8. Print a pattern of stars in diamond shape
Input: n = 4
Output:

*
**
***
****
***
**
*
*/

#include <stdio.h>
void main(){
	int i,j,n=4,s;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf(" *");
		}
		printf("\n \n");
	}
	for(i=n-1;i>=1;i--){
		for(j=1;j<=i;j++){
			printf(" *");
		}
		printf("\n \n");
	}
	
	
	
}