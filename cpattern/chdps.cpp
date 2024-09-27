//hollow diamond pattern *
#include<stdio.h>
int main(){
	int i,j,k,x,n=5;
	for(i=0;i<2*n-1;i++){
		if(i<n){
			x=2*(n-i)-1;
		}else 
		{
			x=2*(i-n+1)+1;
		}
		for(j=0;j<x;j++){
			printf("  ");
		}
		for(k=0;k<2*n-x;k++){
			if(k==0||k==2*n-x-1){
				printf(" * ");
			}
			else{
			printf("    ");
			}
		}
		printf("\n");
	}
	return 0;
}
