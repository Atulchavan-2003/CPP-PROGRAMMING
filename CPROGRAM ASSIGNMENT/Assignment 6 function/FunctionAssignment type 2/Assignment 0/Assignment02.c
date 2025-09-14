// 2.write a c program to find the area of a circle.
#include<stdio.h>
float area_circle();
void main (){
     
	 printf("%f",area_circle());	
	
}
float area_circle(){
	
	 float pi = 3.14;
	 
	 float area,radius= 5;
	 
	   area = pi*radius*radius;
	 
	 return area;
}
 