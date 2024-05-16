// stampaNumeri_for.c
// Stampa in ordine crescente e decrescente numeri da 0 a n con ciclo for

#include <stdio.h>

int main() {
    int n;
    printf("Inserisci un numero intero: ");
    scanf("%d", &n);

    // Stampa numeri da 0 a n
    printf("Numeri da 0 a %d\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d\n", i);
    } // end for

    // Stampa numeri da n a 0
    printf("\nNumeri da %d a 0\n", n);
    for (int i = n; i >= 0; i--) {
        printf("%d\n", i);
    } // end for 

    // Stampa numeri dispari da 0 a n
    printf("\nNumeri dispari da %d a 0\n", n);
    for (int i = 1; i < n; i+=2) {
        printf("%d\n", i);
    } // end for
} // end function main