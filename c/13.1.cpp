#include <stdio.h>

int factorial(int);

int main() {
    int num;
    
    printf("Enter any integer: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial of a negative number is not defined.\n");
    } else {
        printf("Factorial of %d is %d.\n", num, factorial(num));
    }
    
    return 0;
}
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

