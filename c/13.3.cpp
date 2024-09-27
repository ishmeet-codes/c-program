#include <stdio.h>

void f1(int n);

void f2(int n);

void f1(int n) {
    if (n > 0) {
        printf("%d ", n);
        f2(n - 1);
    }
}

void f2(int n) {
    if (n > 1) {
        printf("%d ", n);
        f1(n / 2);
    }
}

int main() {
    int num;
    printf("\nEnter number of series u want:- ");
    scanf("%d",&num);
    printf("\nIndirect Recursion Output: ");
    f1(num);
    return 0;
}

