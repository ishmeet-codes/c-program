//student marks total, perc
#include <stdio.h>

int main() {
    int marks[5],sum;
    int i;

   
    printf("Enter marks for 5 subjects:\n");
    for(i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i+1);
        scanf("%d", &marks[i]);
        
    }
for (int i = 0; i <5 ; i++) {
    sum += marks[i];
 
    }printf("\nEntered marks for 5 subjects are:\n");
    for(i = 0; i <= 4; i++) {
        printf("Subject %d: %d\n", i+1, marks[i]);
        
    }
    printf("\n Total marks are:- %d",sum);
	printf("\n Total percentage is:- %d",sum/5);
    return 0;
}
