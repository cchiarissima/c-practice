// reseller.c
// Read quantity sold in a day for each sold item and display total retail value of sold items

#include <stdio.h>
#include <stdbool.h>

int main() {
    const float price1 = 2.98, price2 = 4.50, price3 = 9.98, price4 = 4.49, price5 = 6.87;

    bool runCycle = true;
    int product = 0, quantity = 0;
    double value1 = 0, value2 = 0, value3 = 0, value4 = 0, value5 = 0;
    
    while (runCycle) {
        printf("Enter product number (-1 to stop): ");
        scanf("%d", &product);

        if (product == -1) {
            runCycle = false;
        } // end if
        else {
            printf("Enter quantity sold in a day: ");
            scanf("%d", &quantity);

             switch (product) {
                case 1:
                    value1 = price1 * quantity;
                    break;
                case 2:
                    value2 = price2 * quantity;
                    break;
                case 3:
                    value3 = price3 * quantity;
                    break;
                case 4:
                    value4 = price4 * quantity;
                    break;
                case 5:
                    value5 = price5 * quantity;
                    break;
            } // end switch
        } // end else
    } // end while

    double total = value1 + value2 + value3 + value4 + value5;
    printf("Total retail value of sold items: %.2f", total);
}