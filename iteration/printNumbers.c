// printNumbers.c
// Print numbers from 1 to 10 side by side on the same line with three spaces between numbers 

#include <stdio.h>

int main() {
    int num = 1;

    while (num < 11) {
        printf("%d   ", num);
        num++;
    } // end while
}
