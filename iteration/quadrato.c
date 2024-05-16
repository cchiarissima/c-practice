// quadrato.c 
// Legge un numero n e stampa un quadrato di n*n caratteri divisi tra *, \ e : con ciclo while

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;

    printf("Inserisci un numero intero: ");
    scanf("%d", &n);

    // genera quadrato
    int contatore1 = 0, contatore2 = 0, contatore3 = 0;
    while (contatore1 < n) {
        if (contatore1 == 0) {
            printf("\\");
        } // end if
        else {
            printf("\n*");
        } // end else
        contatore1++;

        while (contatore2 < n) {
            printf(":");
            contatore2++;
        } // end inner while
        contatore2 = 0;

    }// end outer while
}