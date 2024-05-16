// binaryToDecimal.c
// Convert binary of maximum 5 digits to decimal

#include <stdio.h>
#include <stdbool.h>

int main() {
    int number;
    bool isBinary = true; 

    printf("Enter a binary number of maximum 5 digits: ");
    scanf("%d", &number);

    // check if input is binary
    int counter = 0;
    int check = number;
    while (counter < 5) {
        if (check % 10 != 0 && check % 10 != 1) {
            isBinary = false;
        } // end if
        check /= 10;
        counter++;
    } // end while

    // display warning message
    if (counter > 5 || isBinary == false) {
        printf("Invalid input. Please make sure of entering a binary number of maximum 5 digits\n");
        scanf("%d", &number);
    } // end if

    // convert each digit 
    int first = (number % 10) * 1;
    int second = ((number / 10) % 10) * 2;
    int third = ((number / 100) % 10) * 4;
    int fourth = ((number / 1000) % 10) * 8;
    int fifth = ((number / 10000) % 10) * 16;

    // sum and display decimal
    int decimal = first + second + third + fourth + fifth;
    printf("%d to decimal is: %d", number, decimal);
}