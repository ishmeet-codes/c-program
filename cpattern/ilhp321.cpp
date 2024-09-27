//Inverted Left Half Pyramid Pattern in C of *
#include<stdio.h>
int main(){
	int i,j,k;
	for(i=0;i<=5;i++){
		for(j=0;j<i+1;j++){
			printf(" ");
		}
	for(k=5-i;k>=0;k--){
		printf("%d",k+1);
	}printf("\n");
	}
	return 0;
}
