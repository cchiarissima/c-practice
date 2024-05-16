// scelteSuInteri.c
/* Stampa messaggio a seconda della condizione:
• se n è pari e maggiore di m, allora stampa "C1"
• se n è pari e minore o uguale ad m, allora stampa "C2"
• se invece n è dispari, procede in questo modo:
• se anche m è dispari stampa "C3"
• se invece m non é dispari ma è più del doppio di n, allora stampa "C4"
• in ogni altro caso, stampa "ALTRO" */

#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    
    // stampa messaggi a seconda della condizione
    if ((n % 2 == 0) && n > m) {
        printf("C1");
    } // end if
    else if ((n % 2 == 0) && n < m) {
        printf("C2");
    } // end else if
    else if (n % 2 != 0) {
        if (m % 2 != 0) {
            printf("C3");
        } // end if
        else if ((m % 2 == 0) && m > 2*n) {
            printf("C4");
        } // end else if
        else {
        printf("ALTRO");
        } // end else
    } // end else if
} // end function main