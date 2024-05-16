// findMaximum.c
// Find two largest numbers among ten entered, with each number allowed only once

#include <stdio.h>
#include <stdbool.h>

int main() {
    int number = 0, counter = 0, largest1 = 0, largest2 = 0;

    while (counter < 10) {
        puts("Enter a number: ");
        scanf("%d", &number);

        int previousNum = 0;

        if (number == previousNum) {
            printf("You can enter each number only once! Please enter a different number: ");
            scanf("%d", &number);
        } // end if

        previousNum = number;
        counter++;
        printf("\nMissing %d number(s)\n", 10-counter);

        if (number > largest1) {
            largest2 = largest1;
            largest1 = number;
        } // end if
        else if (number > largest2 && number != largest1) {
            largest2 = number;
        } // end else if
    } // end while

    printf("First largest: %d\nSecond largest: %d", largest1, largest2);
} // end function main
