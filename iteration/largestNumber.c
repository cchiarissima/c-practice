// largestNumber.c
// Determine largest number among 10 non-negative numbers entered by user

#include <stdio.h>
#include <stdbool.h>

int main() {
    int counter = 0, number = 0, largest = 0;

    while (counter <= 10) {
        printf("\nEnter a number: ");
        scanf("%d", &number);

        if (number >= 0) {
            if (number > largest) {
                largest = number;
            }
            counter++;
            printf("\nYou entered: %d\nNumbers missing: %d", number, (10-counter));
        } // end if
    }
    
    printf("\nLargest number: %d", largest);
}
