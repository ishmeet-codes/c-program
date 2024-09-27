#include<stdio.h>
 int afc(int r){
 	return r*r*22/7;
 }
 int main(){
 	
 	int r,area;
 	printf("\nEnter radius of circle:- ");
 	scanf("%d",&r);
 	area=afc(r);
 	printf("\nArea of circle with radius %d is %d",r,area);
 	return 0;
 }
