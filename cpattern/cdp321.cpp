//hourglass pattren of 123
#include<stdio.h>
int main(){
	int i,j,k,x,n=5;
	for(i=0;i<2*n-1;i++){
		if(i<n){
			x=2*i+1;
		}else {x=2*(2*n-i)-3;}
		for(j=0;j<x;j++){
			printf(" ");
		}
		for(k=2*n-x;k>=0;k--){
			printf("%d ",k+1);
		}printf("\n");
		
		
	}	
	return 0;
}
