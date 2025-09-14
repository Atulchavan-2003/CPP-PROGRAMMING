/*1) wap to caclutate electricity bill. 
  for 1-50 units -30 /for 51-150 units - 40 rs 
  /unit, for 51-151 and above units -50 rs unit   */ 
  #include <stdio.h>
  void main(){
  	int unit;
  	  printf("Enter the unit");
  	  scanf("%d",&unit);
   if(unit != 0) {
  	  if (unit < 50 )
		printf("bill rs - 30");
	  else if (unit <= 151)
		printf("bill rs - 40");	
	  else if (unit >151 )
		printf("bill rs- 50");
   }
	else {
	  	 printf("negitive");
	  }	
}