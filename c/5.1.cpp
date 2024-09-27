//separate even, odd, sum
#include <stdio.h>
int main() {
    int i,even=0,odd=0;

    printf("Even numbers: ");
    for (i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            even += i;
        }
    }

    printf("\nOdd numbers: ");
    for (i = 1; i <= 20; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
            odd += i;
        }
    }
printf("\nSum of even numbers: %d\n", even);
printf("\nSum of odd numbers: %d\n", odd);
    return 0;
}

