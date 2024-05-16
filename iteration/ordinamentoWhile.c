// ordinamentoWhile.c
// Riordina in modo crescente tre variabili inserite dall'utente

#include <stdio.h>
#include <stdbool.h>

int main() {
    int v1, v2, v3;
    bool eseguiCiclo = true;

    // chiede input utente
    printf("Inserisci tre numeri interi: ");
    scanf("%d %d %d", &v1, &v2, &v3);
    printf("Valori inseriti: v1 = %d, v2 = %d, v3 = %d\n---------------\n", v1, v2, v3);

    // ciclo while
    int temp, n_ciclo = 0;
    while (eseguiCiclo == true) {
        eseguiCiclo = false; // spegne variabile sentinella

        if (v3 < v2) {
            temp = v3;
            v3 = v2;
            v2 = temp;
            eseguiCiclo = true; // riaccende variabile sentinella
        } // end if
        if (v2 < v1) {
            temp = v1;
            v1 = v2;
            v2 = temp;
            eseguiCiclo = true; // riaccende variabile sentinella
        } // end if
    
        n_ciclo += 1; // incrementa contatore cicli
        printf("Numero cicli: %d\nv1 = %d, v2 = %d, v3 = %d\n---------------\n", n_ciclo, v1, v2, v3);
    } // end while
    printf("Dopo lo scambio: v1 = %d, v2 = %d, v3 = %d\n", v1, v2, v3);
} // end function main