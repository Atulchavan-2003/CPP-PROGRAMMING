#include <stdio.h>
void main (){
	 int i,j,m=10,n = 5;
	 for ( i = n; i>= 1;i--){
	 	for ( j = 1;j<=m;j++){
	 	    if(i==n||i==1||j==1||j==m)
		 		printf("  * ");
		 	else
		 		printf(" %- ",i,j);
	    }
		 	 printf("\n\n");
    } 
}