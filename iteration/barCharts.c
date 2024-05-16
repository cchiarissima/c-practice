// barCharts.c
// Reads five numbers from one to 30 and prints lines of asterisks

#include <stdio.h>

int main() {
    int var, var1, var2, var3, var4, var5;
    int counter = 1;

    while (counter < 6) {
        printf("Enter a number: ");
        scanf("%d", &var);

        if (var < 1 || var > 30) {
            printf("Invalid input. Please enter a number from 1 to 30: ");
            scanf("%d", &var);
        } // end if

        switch (counter) {
            case 1: 
                var1 = var;
                break;
            case 2:
                var2 = var;
                break;
            case 3:
                var3 = var;
                break;
            case 4:
                var4 = var;
                break;
            case 5: 
                var5 = var;
                break;
        } // end switch

        counter++;

    } // end while

    // print bar charts with corresponding input

    printf("You entered %d: ", var1);
    for (int i = 0; i < var1; i++) {
        printf("%s", "*");
    } // end for 

    puts("");

    printf("You entered %d: ", var2);
    for (int i = 0; i < var2; i++) {
        printf("%s", "*");
    } // end for 

    puts("");

    printf("You entered %d: ", var3);
    for (int i = 0; i < var3; i++) {
        printf("%s", "*");
    } // end for 

    puts("");

    printf("You entered %d: ", var4);
    for (int i = 0; i < var4; i++) {
        printf("%s", "*");
    } // end for 

    puts("");

    printf("You entered %d: ", var5);
    for (int i = 0; i < var5; i++) {
        printf("%s", "*");
    } // end for 
}

