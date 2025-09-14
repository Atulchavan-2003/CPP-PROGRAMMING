/*2.Print a right-angled triangle pattern
Input: n = 5*/
#include <stdio.h>
void main (){
	 int n = 4;
	 for (int i = 1; i<= n;i++){
	 	for ( int j = 1;j<=i;j++){
	 		printf("*");
	 		
		 }
		 printf("  \n");
	 }
}