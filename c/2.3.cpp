//arithmetic oper
#include <stdio.h>
int main(){
	int y=10,x,z=10;
	x=y;
	printf("x=%d",x);
	z +=6;
	printf("\nz=%d",z);
	z -=3;
	printf("\nz=%d",z);
	y %=9;
	printf("\ny=%d",y);
	x ^=5;
	printf("\nx=%d",x);
	return 0;
}
