#include <stdio.h>
int squared(float sq){
	return(sq*sq);
}
int main(){
	float sq;
	printf("Enter number to be squared:- ");
	scanf("%f",&sq);
	float result= squared(sq);
	printf("Square of %.2f is %.2f",sq,result);
}
