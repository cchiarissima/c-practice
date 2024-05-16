// sumInt.c
// Sum a sequence of integers of length equal to first number read with scanf

#include <stdio.h>

int main() {
    int totalRuns = 0;

    printf("Enter the number of values you want to sum: ");
    scanf("%d", &totalRuns);

    int counter = 0, value = 0, sum = 0;
    while (counter < totalRuns) {
        printf("\nEnter an integer: ");
        scanf("%d", &value);
        sum += value;
        counter++;
    } // end while

    printf("\nSum: %d", sum); 
}