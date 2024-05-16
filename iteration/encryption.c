// encryption.c
// Simple encryption scheme for 4-digit input

#include <stdio.h>
#include <stdbool.h>

int main() {
    int userInput;
    bool runCycle = true;

    printf("Enter a 4-digit number: ");
    scanf("%d", &userInput);

    // check if input is 4 digit long
    while (runCycle) {
        if (userInput >= 10000 || userInput < 1000 && userInput != 0000) {
            printf("Invalid input. Please enter a 4-digit number: ");
            scanf("%d", &userInput);
        } // end if
        else {
            runCycle = false;
        } // end else
    } // end while

    // encrypt input: add 7 to each digit
    int temp1 = userInput;
    int counter = 0;
    int first, second, third, fourth;
    while (counter < 4) {
        int digit = temp1 % 10;
        digit += 7;

        if (counter == 0) {
            fourth = digit;
        } // end if
        else if (counter == 1) {
            third = digit;
        } // end else if
        else if (counter == 2) {
            second = digit;
        } // end else if
        else if (counter == 3) {
            first = digit;
        } // end else if

        temp1 /= 10;
        counter++;
    } // end while

    // encrypt input: swap digits
    int temp2, temp3;
    temp2 = first;
    first = third;
    third = temp2;
    temp3 = second;
    second = fourth;
    fourth = temp3;

    // display result
    printf("Entered number: %d\nEncrypted as string of digits: %d%d%d%d", userInput, first, second, third, fourth);

} // end function main
