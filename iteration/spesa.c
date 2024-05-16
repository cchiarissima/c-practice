// spesa.c
// Calcola spesa totale dato il prezzo dei prodotti da acquistare

#include <stdio.h>
#include <stdbool.h>

int main() {
    float prezzoProdotto = 0, totProdotti = 0;
    bool eseguiCiclo = true;

    while (eseguiCiclo) {
        printf("Inserisci il prezzo del prodotto che vuoi acquistare. Inserisci '-1' per interrompere: ");
        scanf("%f", &prezzoProdotto);
        
        if (prezzoProdotto >= 0) {
            totProdotti += prezzoProdotto;
        } // end if
        else {
            eseguiCiclo = false;
        } // end else
    } // end while
    printf("Totale spesa: %.2f", totProdotti);

} // end function main