#include <stdio.h>
int main(){
	int i,j,num[2][3]={ {1,3,5},{2,4,6}};
	for (i=0;i <2;i++){
		for(j=0;j<3;j++){
			printf("%d\n",num[i][j]);
		}
	}
	return 0;
}
