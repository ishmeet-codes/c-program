#include<stdio.h>

void addition(int x,int y){
	printf("Sum is %d\n",x+y);
}
void diff(int x,int y){
	printf("Diff is %d\n",x-y);
}
void pro(int x,int y){
	printf("Product is %d\n",x*y);
}
void div(int x,int y){
	printf("Division is %d\n",x/y);
}
int main(){
	pro(8,9);
	div(9,3);
	addition(3,4);
	diff(9,5);
	return 0;
}
