#include <stdio.h>

int main() {
    int num, reversedNumber = 0, remainder;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Reversing the number
    while (num != 0) {
        remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10;
    }
    
    printf("Reversed number: %d\n", reversedNumber);
    
    return 0;
}

