// calcolatrice.c
// Calcola somma, prodotto e media di tre numeri presi in input. Stampa risultati in base all'operazione scelta dall'utente

#include <stdio.h>

int main() {
    int x1, x2, x3;

    // chiede input e stampa istruzioni
    printf("Inserisci tre numeri interi: ");
    scanf("%d %d %d", &x1, &x2, &x3);
    printf("Scrivi 1 per calcolare la sommma.\nScrivi 2 per calcolare il prodotto.\nScrivi 3 per calcolare la media.\n");

    // chiede operazione all'utente
    int scelta_utente;
    printf("Inserisci il numero corrispondente all'operazione che vuoi effettuare: ");
    scanf("%d", &scelta_utente);

    // stampa risultato in base alla selezione
    if (scelta_utente == 1) {
        printf("Somma: %d", x1+x2+x3);
    } // end if
    else if (scelta_utente == 2) {
        printf("Prodotto: %d", x1*x2*x3);
    } // end else if
    else if (scelta_utente == 3) {
        printf("Media: %d", ((x1+x2+x3)/3));
    } // end else if
    else {
        printf("L'operazione scelta non è compresa tra quelle proposte.");
    } // end else
} // end function main