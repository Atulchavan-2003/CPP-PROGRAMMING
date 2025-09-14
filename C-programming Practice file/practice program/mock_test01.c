//invert right angle trangle 
#include <stdio.h>
void main (){
	 int i,j,s,n = 10;
	 for ( i = n; i>= 1;i--){
	 	for ( j = 1;j<=i;j++){
	 		printf(" * ");
	 		
		 }
		 for(j=n-i;j >= 1;j--){
			printf("   ");
		 }
		 for(j=n-i;j >= 1;j--){
			printf("   ");
		 }
		 for(j = 1 ; j<=i;j++){
		 	printf(" * ");
		 }
		       
		 printf("\n\n");
	 }
	 
}