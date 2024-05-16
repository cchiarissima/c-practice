// floyd.c
// Triangolo di Floyd

#include <stdio.h>

int main(void) {
    int n, i, j, k = 1;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    // ciclo esterno per le righe
    for (i = 0; i < n; i++) {
        // ciclo interno per le colonne
        for (j = 0; j <= i; j++) {
            printf("%d ", k);
            k++;
        } // end for
        puts();
    } // end for
} // end function main

