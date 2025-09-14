/*10 Find Sum of first and last digit of given number.
Input: n = 12345
Output: 6 (1 + 5)*/
#include <stdio.h>
void main(){
	int n = 12345, first;
	int last;
            last = n % 10;
           
             
	while( n > 0 ){
		first = n % 10;
	  	
	  	n = n / 10;
 	}
 	printf("%d ", first + last  );
}