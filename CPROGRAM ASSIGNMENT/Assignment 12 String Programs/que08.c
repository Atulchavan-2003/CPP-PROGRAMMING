/*8. WAP to Calculate the Number of Words Present in a String*/
#include <stdio.h>
#include <string.h>


int countWords(const char *str) {
	int count = 1;
	int i=0;
	while(str[i]!='\0') {
		if(str[i]==' ')
			count++;
		i++;
	}
	printf("%d ",count);
	return count;
}

int main() {
	char str[1000];

	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);  // Read line including spaces

	int wordCount = countWords(str);

	printf("Number of words = %d\n", wordCount);


}
