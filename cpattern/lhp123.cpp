//Left Half Pyramid Pattern in C of 123
#include<stdio.h>
int main(){
	int i,j,k;
	for(i=0;i<5;i++)
	{
		for(j=0;j<(5 - i) ; j++){
			printf(" ");
		}
		for(k=0;k<=i;k++){
			printf("%d",k+1);
		}printf("\n");
	}
	return 0;
}
