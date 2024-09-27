//Inverted Left Half Pyramid Pattern in C ofABC
#include<stdio.h>
int main(){
	int i,j,k;
	for(i=0;i<=5;i++){
		for(j=0;j<i+1;j++){
			printf(" ");
		}
	for(k=0;k<=5-i;k++){
		printf("%c",'A'+k);
	}printf("\n");
	}
	return 0;
}
