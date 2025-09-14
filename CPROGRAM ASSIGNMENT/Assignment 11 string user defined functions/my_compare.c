#include<stdio.h>
#include<string.h>
int my_compare(char*,char*);
void main() {
	char a1[]="atul";
	char a2[]="atul";
	printf("%d",my_compare(a1,a2));

}
int  my_compare(char* a1,char* a2) {
     int i=0;
	while(a1[i]!= NULL) {
		if(a1[i] != a2[i]) {
			return -1;
		}
		i++;
	}
	

    return 0;


}