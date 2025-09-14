/*5. Print an inverted pyramid pattern
Input: n = 5*/
#include <stdio.h>
void main (){
	 int n = 5,i,j;
	 for ( i = n; i >= 1;i--){
	 	for ( int s = 1;s <= n-i;s++){
			printf(" "); 
			
		}
		for ( j = 1;j<=i;j++){
 
			printf("* ");
		}
		printf("\n");
     }
     
}