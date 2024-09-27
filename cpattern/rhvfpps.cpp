//right hand vertical full pyyramid of *
#include<stdio.h>
int main(){
	int i,j,k,x,y,z;
	for(i=0;i<5;i++)
	{
		for(j=0;j<(5 - i) ; j++){
			printf("  ");
		}
		for(k=0;k<=i;k++){
			printf("* ");
		}	printf("\n");	
	}
	for(x=0;x<=4;x++){
		for(y=0;y<x+1;y++){
			printf("  ");
		}
	for(z=0;z<=4-x;z++){
		printf(" *");
	}printf("\n");
	}
	
	
	
	return 0;
}
