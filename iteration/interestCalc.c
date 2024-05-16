// interestCalc.c
// Calculate annual interest on several loans

#include <stdio.h>
#include <stdbool.h>

int main() {
    float loan = 0;
    bool runCycle = true;

    while (runCycle) {
        printf("Enter loan principal (-1 to end): ");
        scanf("%f", &loan);

        float temp = 0, rate = 0;
        int termDays = 0;
        if (loan >= 0) {
            temp = loan;

            printf("Enter interest rate: ");
            scanf("%f", &rate);
            printf("Enter term of loan in days: ");
            scanf("%d", &termDays);

            float interest = (loan * rate * termDays) / 365;
            printf("The interest charge is $%.2f", interest);
        } // end if
        else {
            loan = temp;
            runCycle = false;
        } // end else
    } // end while
} // end function main
