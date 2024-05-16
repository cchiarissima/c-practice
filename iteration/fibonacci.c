// fibonacci.c
// legge in input un intero >= 2 e stampa i primi n numeri della successione di Fibonacci

#include <stdio.h>

int main() {
    int n;

    printf("Inserisci un numero intero maggiore di 2: ");
    scanf("%d", &n);

    int a = 0, b = 1;
    printf("%d %d ", a, b);

    for (int i = 0; i < (n - 2); i++) {
        int successivo = a + b;
        printf("%d ", successivo);
        a = b;
        b = successivo;
    }
}