#include <stdio.h>
int main(){
	int i,j,num[2][3];
	
	printf("Enter elements of 2x3 matrix");
	 for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element at position (%d, %d): ", i+1, j+1);
            scanf("%d", &num[i][j]);
        }
    }
    for (i=0;i <2;i++){
		for(j=0;j<3;j++){
			printf("%d\n",num[i][j]);
		}
	}
	return 0;
}
