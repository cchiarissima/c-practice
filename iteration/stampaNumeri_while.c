// stampaNumeri_while.c
// Stampa in ordine crescente e decrescente numeri da 0 a n con ciclo while

#include <stdio.h>

int main() {
    int n;
    printf("Inserisci un intero: ");
    scanf("%d", &n);

    // stampa numeri da 0 a n
    int i = 0;
    printf("Numeri da 0 a %d:\n", n);
    while (i < n) {
        printf("%d\n", i);
        i += 1;
    } // end while

    // stampa numeri da n a 0
    int j = 0;
    printf("Numeri da %d a 0:\n", n);
    while (j < n) {
        j += 1;
        printf("%d\n", n-j);
    } // end while

    // stampa interi dispari da 0 a n
    int k = 0;
    printf("Numeri dispari da 0 a %d:\n", n);
    while (k < n) {
        if (k == 0) {
            printf("%d\n", k);
        } // end if
        else if (k % 2 == 1) {
            printf("%d\n", k);
        } // end else if
        k += 1;
    } // end while
} // end function main
