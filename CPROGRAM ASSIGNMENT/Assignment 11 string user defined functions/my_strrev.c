#include<stdio.h>
#include<string.h>
char* mystr_rev(char*);
void  main() {
	char str[]="atul";
    printf("%s",mystr_rev(str));
      
}//main end here
char* mystr_rev(char* dest) {

	int i=0,len=0;

	while(dest[i]!='\0') {
		len++;
		i++;
	}
	char tem[len];
	
	for(int i=0; i<(len/2)-1; i++) {
		tem[i]=dest[i];
		
		dest[i]= dest[len-1-i];
		
		dest[len-1-i]=tem[i];
	}
	dest[len]='\0';
	
	return dest;
}