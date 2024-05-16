// earningsCalc.c
// Calculate a salesperson's earnings from weekly gross sales

#include <stdio.h>
#include <stdbool.h>

int main() {
    float sales = 0, earnings = 0;
    int runCycle = true;

    while (runCycle) {
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &sales);
        
        float temp = sales;
        if (sales >= 0) {
            temp = sales;
        } // end if
        else {
            sales = temp;
            runCycle = false;
        } // end else
    } // end while

    earnings = 200 + ((sales * 9) / 100);
    printf("Gross sales: %.2f\nSalary is: %.2f", sales, earnings);
} // end function main