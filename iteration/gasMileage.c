// gasMileage.c
// Calculate and display miles per gallons rapport given miles driven and gallons consumed

#include <stdio.h>
#include <stdbool.h>

int main() {
    int tank = 0, total_tanks = 0;
    int runCicle = true;

    // get gallons
    while (runCicle) {
        printf("Enter the gallons used (-1 to stop): ");
        scanf("%d", &tank);
        if (tank >= 0) {
            total_tanks += tank;
        }  // end if
        else {
            runCicle = false;
        } // end else
    }
    //printf("Last entry: %d\nTotal gallons entered: %d", tank, total_tanks);

    // get miles
    int miles = 0;
    printf("Enter miles driven: ");
    scanf("%d", &miles);

    // display calculations
    printf("The miles/gallon rapport for this tank was: %.2f", miles / (float)total_tanks);
}  // end function main

/*
Test --> 
gallons: 4, 12, 2, 21, -1 = 39
miles: 120
result: 3,08
*/ 