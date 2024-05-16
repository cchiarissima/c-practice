// sevens.c
// Read integer of maximum 5 digits and determines how many integers are 7s

#include <stdio.h>
#include <stdbool.h>

int main() {
    int number = 0;
    bool isSeven = false;

    // get user input
    printf("Enter a number of maximum 5 digits: ");
    scanf("%d", &number);

    // check if number is 5 digits or less
    if (number >= 100000) {
        printf("Invalid input. Please enter a number of maximum 5-digits: ");
        scanf("%d", &number);
    } // end if

    // check if there are any 7s
    int temp = number;
    int counter = 0, sevens = 0;
    while (counter < 5) {
        if ((temp % 10) == 7) {
            isSeven = true;
            sevens++;
        } // end if
        printf("Current digit: %d\n", (temp % 10));
        counter++;
        temp /= 10;
    } // end while

    if (isSeven == true) {
        printf("There are %d instances of 7", sevens);
    } // end if
    else {
        printf("There are no 7");
    } // end else
}