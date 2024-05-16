// squaresCubes.c
// Display squares and cubes of numbers from 1 to 5

#include <stdio.h>

int main() {
    int i, square, cube;

    // squares and cubes
    for(i = 1; i <= 5; i++) {
        square = i*i;
        cube = i*i*i;
        printf("%d -> square: %d, cube: %d", i, square, cube);
    }
} // end function main