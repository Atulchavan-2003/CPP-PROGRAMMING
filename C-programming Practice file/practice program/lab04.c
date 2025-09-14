#include<stdio.h>
#include<string.h>
void main(){
 char a[] ="first";
 char b[6];
 int n=5;
 
 for(int i=0;i<n;i++) {
 	b[i]=a[n-1-i];
 }
 b[n]='\0';
 printf("%s",b);
 
 
	
}
