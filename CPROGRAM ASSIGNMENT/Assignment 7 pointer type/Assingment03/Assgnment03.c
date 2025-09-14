/*3 Sum of numbers in given range.
Find sum of numbers from start to end.
Input: start = 1, end = 5
Output: 15*/
#include <stdio.h>
int sum_of_number(int* );
void main (){
	int end = 5;
	sum_of_number(&end);
}      
int sum_of_number( int* end){
	int sum = 0,start=1;
	while(start <= *end){
	    sum = sum + start;	
		start++;          
	}   
		printf("output := %d ",sum);
}