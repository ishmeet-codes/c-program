// C Program to Illustrate the Indirect Recursion
#include <stdio.h>

void functionA(int n)
{
    if (n < 1) {
        return;
    }
    printf("%d ", n);
    n = n - 1;

    // Indirect recursive call to functionB
    functionB(n);
}

void functionB(int n)
{
    if (n < 2) {
        return;
    }

    printf("%d ", n);
    n = n / 2;

    // Indirect recursive call to functionA
    functionA(n);
}

int main()
{
    functionB(20);

    return 0;
}

