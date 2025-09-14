/*3. WAP to Remove the nth Index Character from a Non-Empty String*/
#include<stdio.h>
#include<string.h>
void atul(char*,int);
void main() {
	char str[]="atul";
	int n;
	printf("remove the number do you want\n");
	scanf(" %d",&n);
	atul(str,n);

}
void atul(char* str,int n) {
	int len=strlen(str);

	if(n < len) {
		int x=0;
		for(int i=0; i<len; i++) {
			if(i == n) {
				x=1;
				for(int j=i; j<len; j++) {
					str[j]=str[j+1];
				}
			}
			else if(x!=0) {
				printf("break \n");
				break;
			}

		}
		printf("%s",str);
	} else {
		printf("invalid number ");
	}
}