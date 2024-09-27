//c hollow square of 123
#include<stdio.h>
int main(){
	int i,j,n=5;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if (i>0&&i<n-1&&j>0&&j<n-1){
				printf("  ");
			}else {printf("%d ",j+1);
			}
		}printf("\n");
	}
	
	
	return 0;
}
