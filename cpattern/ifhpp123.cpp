//hollow inverted full pyramid pattern of 123
#include<stdio.h>
int main(){
	int i,j,k,n=5;
	for(i=0;i<n;i++){
		for(j=0;j<2*i+1;j++){
			printf(" ");
		}
		for(k=0;k<2*(n-i)-1;k++){
			if(k==0||k==2*(n-i)-2||i==0){
				printf("%d ",k+1);
			}else {printf("  ");
			}
		}printf("\n");
	}
	
	
	
	return 0;
}
