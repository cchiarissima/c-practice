// multiples10.c
// Print 100 asterisks on at a time, plus a newline every 10th asterisk

#include <stdio.h>

int main() {
    int counter = 0;

    while (counter < 100) {
        printf("*");
        counter++;

        if (counter % 10 == 0) {
            printf("\n");
        } // end if
    } // end while
}// end function main