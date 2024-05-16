// sumToTen.c
// Calculate sum of integers from 1 to 10 

#include <stdio.h>

int main() {
    int n = 11, i = 1, sum = 0;
    
    while(i < n) {
        sum += i;
        i++;
    } // end while
    printf("Sum of numbers from 1 to 10: %d", sum);
} // end function main
