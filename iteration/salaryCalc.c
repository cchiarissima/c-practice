// salaryCalc.c
// Calculate gross pay for each of several employees

#include <stdio.h>
#include <stdbool.h>

int main() {
    int runCycle = true;
    float hours = 0;

    while (runCycle) {
        printf("Enter the number of hours worked last week (-1 to stop): ");
        scanf("%f", &hours);

        float temp = 0, rate = 0, pay = 0;
        if (hours >= 0) {
            temp = hours;
            printf("Enter the hourly rate in $: ");
            scanf("%f", &rate);

            pay = 0;

            if (hours <= 40) {
                pay += hours * rate;
            } // end nested if
            else {
                pay += 40 * rate;
                pay += (hours - 40) * (1.5 * rate);
            } // end nested else if

            printf("Gross pay: %.2f\n", pay);
        } // end if
        else {
            hours = temp;
            runCycle = false;
        } // end else
    } // end while
} // end function main