//table
#include <stdio.h>
int main(){
	int n,i;
	printf("Enter number :- ");
	scanf("%d",&n);
	for(i = 0; i <= 10; i++){
		printf("\n%dx%d=%d",n,i,n*i);
	}
}
