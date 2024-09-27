#include <stdio.h>

int main() {
  int m, n, i,j,k, first[10][10], trans[10][10];

  printf("Enter the number of rows and columns of the matrices\n");
  scanf("%d%d", &m, &n);

  printf("Enter the elements of  matrix\n");
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      scanf("%d", &first[i][j]);

      
      
      
      for(i=0;i<m;i++){
      	for(j=0;j<n;j++){
      		trans[j][i]=first[i][j];
		  }
	  }
      
      for (i=0;i <m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",trans[i][j]);
		}printf("\n");
	}
      
      
return 0;
}
