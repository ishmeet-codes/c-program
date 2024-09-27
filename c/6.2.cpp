#include <stdio.h>
int main(){
	int num[5],i;
	printf("Enter  5 number:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &num[i]);
    }
    int even=0,odd=0;

    printf("Even numbers: ");
    for (i = 0; i < 5; i++) {
        if (num[i] % 2 == 0) {
            printf("%d ", num[i]);
            even += i;
        }
    }

    printf("\nOdd numbers: ");
    for (i = 0; i < 5; i++) {
        if (num[i] % 2 != 0) {
            printf("%d ", num[i]);
            odd += i;
        }
    }    
        
        
        
        
        
        }
