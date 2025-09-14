/*3 Sum of numbers in given range.
Find sum of numbers from start to end.
Input: start = 1, end = 5
Output: 15*/
#include <stdio.h>
int sum_of_number(int, int,int );
void main (){
	int start = 1, end = 5,sum = 0;
	sum_of_number(start, end, sum);
}      
int sum_of_number(int start,int end,int sum){
	while(start <= end){
	    sum = sum + start;	
		start++;          
	}   
		printf("%d ",sum);
}