// squareAsterisks.c tutorial
// Print square out of asterisks with side up to 20 corresponding to user input  

#include <stdio.h>

int main() {
    int side = 1;

    printf("Enter the size of the square side: ");
    scanf("%d", &side);

    // check if side size is valid
    if (side < 0 || side > 20) {
        printf("Invalid input. Please enter a number included between 0 and 20\n");
        scanf("%d", &side);
    } // end if

    int counter = 0, innerCounter = 0;
    while (counter < side) {
        /*  Outer loop controls number of rows. It runs as many times as the size of the side. Starting from counter = 0, it increments it until counter == side. In each iteration, the program enters the inner loop to print asterisks in a row.  */

        innerCounter = 0;
        while (innerCounter < side) {
            /*  Nested loop controls # of asterisks printed in each row. It runs and prints asterisks as many times as the size of the side for each row. Starting from innerCounter = 0, it increments it until innerCounter == side. After printing as many asterisks as the size of the side the inner loop exists and the program moves to the next line to repeat the process.  */

            printf("*");
            innerCounter++;
        } // end nested while
        printf("\n");
        counter++;
    } // end while
}