#include <stdio.h>

int main() {
  int m, n, i,j,k, first[10][10], second[10][10], result[10][10];

  printf("Enter the number of rows and columns of the matrices\n");
  scanf("%d%d", &m, &n);

  printf("Enter the elements of first matrix\n");
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      scanf("%d", &first[i][j]);

  printf("Enter the elements of second matrix\n");
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      scanf("%d", &second[i][j]);

  
for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            result[i][j] = 0;
        }
    }

  
for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)  {
            for (k = 0; k < n; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
for (i=0;i <m;i++){
		for(j=0;j<n;j++){
			printf("%d\t",result[i][j]);
		}printf("\n");
	}

  return 0;
}
