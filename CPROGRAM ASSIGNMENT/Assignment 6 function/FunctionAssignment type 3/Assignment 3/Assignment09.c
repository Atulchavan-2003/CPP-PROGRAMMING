/*9 Check the given number is Palindrome number or not.
Input: n = 121
Output: Palindrome*/
#include <stdio.h>
int pallindrome(int, int,int, int);
void main(){
	int n = 121,rem;
	int rev = 0, temp = n;
	pallindrome(n,rem,rev,temp);
}
int pallindrome(int n, int rem,int rev, int temp){
	while(n > 0){
		
		rem = n % 10;
		rev = rev*10 + rem;   
		n = n / 10;
	}
	if (temp == rev)
		printf("pallindrame %d ",rev);
}