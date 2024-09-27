//recrusion swap
#include <stdio.h>

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int b, a;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Before swapping: num1 = %d, num2 = %d\n", a, b);

    swap(&a, &b);

    printf("After swapping: num1 = %d, num2 = %d\n", a, b);

    return 0;
}

