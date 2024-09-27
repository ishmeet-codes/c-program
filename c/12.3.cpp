#include <stdio.h>
int asq(int x){
	return x * x;
}
int main(){
	int x,area;
	printf("Enter side of square:- ");
	scanf("%d",&x);
	area=asq(x);
	printf("\nArea of square is %d",area);
return 0;
}
