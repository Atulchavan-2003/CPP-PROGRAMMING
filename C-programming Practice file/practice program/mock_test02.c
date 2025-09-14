#include <stdio.h>
void main(){
	int father_age,sun_age,count=0,before=0;
	printf("Enter the father age ");
	scanf("%d",&father_age);
	printf("Enter the father age ");
	scanf("%d",&sun_age);
	 before=sun_age;
	 count=0;
	
while(father_age>sun_age){

	       father_age++;
	       sun_age++;
	       	count++;
		if(sun_age*2==father_age){
			printf("father and sun age %d %d ",sun_age,father_age);
			//count= sun_age-before;
		
			break;
		
		
    }
    }
		printf(" diff %d ",count);
}