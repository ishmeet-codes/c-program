//operator basics
#include <stdio.h>
int main(){
	int x,y,z,a,b,c,d;
	printf("Enter I number :- ");
	scanf("%d",&x);
	printf("Enter II number :- ");
	scanf("%d",&y);
	z =x+y;
	printf("\n Sum is :- %d",z);
	a= x-y;
	printf("\n Difference is :- %d",a);
	b= x*y;
	printf("\n Product is :- %d",b);
	c= x/y;
	printf("\n Division is :- %d",c);
	d= x%y;
	printf("\n Modulus is :- %d",d);
	return 0;
}
