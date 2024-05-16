#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define MAX_TENTATIVI 7

int main(void) {
	// Genera un numero pseudo-casuale tra 0 (incluso) e 100 (escluso)
	srand(time(0));
	int numero = rand() % 100;

    int t;
    printf("Indovina un numero tra 0 e 100: ");
    scanf("%d", &t);

    int contatore = 0;
    bool eseguiCiclo = true;

    while (contatore < 7 && eseguiCiclo) {
        if (t == numero && contatore != 7) {
            printf("Hai indovinato!");
            eseguiCiclo = false;
        }
        else if (t > numero) {
            printf("Il numero è più piccolo. Riprova!\n");
            scanf("%d", &t);
        }
        else if (t < numero) {
            printf("Il numero è più grande. Riprova!\n");
            scanf("%d", &t);
        }

        contatore++;

    } // end while

    if (contatore == 7) {
        printf("Non hai più tentativi a disposizione.\nIl numero era %d", numero);
    }

} // end main
