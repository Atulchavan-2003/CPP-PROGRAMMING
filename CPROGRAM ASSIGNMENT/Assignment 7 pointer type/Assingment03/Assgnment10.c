/*10 Find Sum of first and last digit of given number.
Input: n = 12345
Output: 6 (1 + 5)*/
#include <stdio.h>
int sumlastfirst(int*);
void main(){
	int n = 12345;
    sumlastfirst(&n);     
             
}
int sumlastfirst(int* n){
	int first, last;
    last = *n % 10;
	while( *n > 0 ){
		first = *n % 10;
	  	
	  	*n = *n / 10;
 	}
 	printf("%d ", first + last  );
}