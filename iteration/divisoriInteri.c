// divisoriInteri.c
// Stampa divisori di un intero in ordine crescente 

#include <stdio.h>

int main(void) {
    int n;
    printf("Inserisci un numero intero: ");
    scanf("%d", &n);
    
    // stampa divisori in ordine crescente
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            printf("%d ", i);
        } // end if
    } // end for
} // end function main