// fattoriale.c
// Stampa prodotto fattoriale di un intero

#include <stdio.h>

int main() {
    int n;
    printf("Inserisci un intero: ");
    scanf("%d", &n);

    // prodotto fattoriale
    int fattoriale = 1;
    for (int i = 1; i <= n; i++) {
        fattoriale *= i;
    } // end for
    printf("Il prodotto fattoriale di %d è %d", n, fattoriale);
} // end function main