//area of circle
#include <stdio.h>
 int main(){
 float x,y,r,area;
  const float pie=3.14;
 printf("Enter radius of circle:-");
 	scanf("%f",&x);
 	/*printf("\nEnter width of rect.:-");
 	scanf("%f",&y);*/
 	area= pie*x;
 	printf("\n Area of circle:- %f",area);
 	return 0;
 }
