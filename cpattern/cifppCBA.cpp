//Inverted Full Pyramid Pattern in C of CBA
#include<stdio.h>
int main(){
	int i,j,k;
	for(i=0;i<5;i++){
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(k = 5-i;k>0; k--){
			printf("%c ",'A'+k-1);
		}	
		printf("\n");
		
	}
	return 0;
}

