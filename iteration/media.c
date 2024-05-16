// media.c
// Riceve dall'utente una sequenza di interi e ne stampa la media

#include <stdio.h>

int main() {
    int n;
    puts("Inserisci un numero intero. Per interrompere inserisci 0.");
    scanf("%d", &n);

    int accumulatore = 0, contatore = 0;
    while(n != 0) {
        accumulatore += n;
        contatore += 1;
        scanf("%d", &n);
    } // end while
    printf("Totale numeri inseriti: %d\n", contatore);
    printf("La media della sequenza inserita è: %d\n", accumulatore/contatore);
} // end function main