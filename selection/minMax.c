// minMax.c
// Scambia valori delle variabili assegnando a z il valore maggiore, a y quello intermedio e a x il minore. Stampa in ordine decrescente 

#include <stdio.h>

int main() {
    int x = 8, y = 2, z = 6;
    printf("Inserisci tre numeri interi separati da uno spazio: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    
    // riordina valori
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    } // end if
    if (y > z) {
        int temp = y;
        y = z;
        z = temp;
    } // end if
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    } // end if
    
    printf("z = %d, y = %d, x = %d", z, y, x);
} // end function main

