
//Here's a C program to print the pattern:
//Right Half Pyramid Pattern in c of CBA
#include <stdio.h>

int main() {
    int rows = 5; 
    int i, j;

    for (i = 0; i < rows; i++) {
       for (j = i; j >= 0; j--) {
            printf("%c", 'A' + j);
        } printf("\n");
    }
    return 0;
}
