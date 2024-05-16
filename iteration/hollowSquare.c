// hollowSquare.c tutorial
// Print hollow square out of asterisks with side up to 20 corresponding to user input 

#include <stdio.h>

int main() {
    int side = 1;

    printf("Enter size of square side: ");
    scanf("%d", &side);

    if (side < 0 || side > 20) {
        printf("Invalid input. Please enter a number included between 0 and 20: ");
        scanf("%d", &side);
    } // end if

    int counter = 0, innerCounter = 0;
    while (counter < side) {
        innerCounter = 0;

        while (innerCounter < side) {
            if (counter == 0 || counter == side - 1 || innerCounter == 0 || innerCounter == side - 1) {
                printf("*");
            } else {
                printf(" ");
            }
            innerCounter++;
        }
        printf("\n");
        counter++;
    }
}