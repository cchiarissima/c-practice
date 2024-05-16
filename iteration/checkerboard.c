// checkerboard.c
// Print checkerboard pattern on eight lines with asterisks

#include <stdio.h>

int main() {
    int rows = 0, columns = 1;

    while (columns < 8) {
        if (columns % 2 == 1) {
            printf("%s", "* ");
        } // end if
        else if (columns % 2 == 0) {
            printf("%s", " ");
        } // end else if

        while (rows < 8) {
            printf("%s", "* ");
            rows++;
        } // end inner while

        columns++;
        rows = 0;
        puts("");
    } // end outer while
}