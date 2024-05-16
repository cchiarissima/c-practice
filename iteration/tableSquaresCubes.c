// tableSquaresCubes.c
// Calculate and display in columns squares and cubes of numbers from 0 to 10 

#include <stdio.h>

int main() {
    int n = 10, i, square, cube;

    puts(" number | square | cube \n");

    for(i = 0; i <= n; i++) {
        square = i*i;
        cube = i*i*i;
        // formatting table
        if(i < 10 && square < 10 && cube < 10) {
            printf("   %d    |    %d   |    %d  \n", i, square, cube);
        } // end if
        else if(i < 10 && square < 10 && cube < 100) {
            printf("   %d    |    %d   |   %d  \n", i, square, cube);
        } // end else if
        else if(i < 10 && square > 10 && cube < 100) {
            printf("   %d    |   %d   |   %d  \n", i, square, cube);
        } // end else if
        else if(i < 10 && square > 10 && cube > 100) {
            printf("   %d    |   %d   |  %d  \n", i, square, cube);
        } // end else if
        else {
            printf("  %d    |  %d   | %d  \n", i, square, cube);
        } // end else 
    } // end for
} // end function main