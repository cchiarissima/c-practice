// quantUniversaleEsistenziale.c
// dimostrazione per implementare quantificatore universale ed esistenziale

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int numero;
    bool eseguiCiclo = true;
    bool dispari = true, multipli3 = true, resto7 = false, cento = false;
    
    while (eseguiCiclo) {
        scanf("%d", &numero);
        
        if (numero != 0) {
            // tutti dispari - ! indica negazione logica
            if (!(numero % 2 != 0)) {
                dispari = false;
            } // quant. universale 
            // tutti multipli di 3
            if (!(numero % 3 == 0)) {
                multipli3 = false;
            } // quant. universale 
            // esiste 7
            if (numero % 10 == 7) {
                resto7 = true;
            } // quant. esistenziale 
            // esiste 100
            if (numero == 100) {
                cento = true;
            }  // quant. esistenziale 
        } else {
            eseguiCiclo = false;
        }
    } // end while
    
    // stampa messaggi
    if (dispari == true) {
        printf("TUTTI_DISPARI ");
    }
    if (multipli3 == true) {
        printf("TUTTI_MULTIPLI_3 ");
    }
    if (resto7 == true) {
        printf("ESISTE_R7 ");
    }
    if (cento == true) {
        printf("ESISTE_100 ");
    }
}