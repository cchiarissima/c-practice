#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TENTATIVI 7

int main(void)
{
	// Genera un numero pseudo-casuale tra 0 (incluso) e 100 (escluso)
	srand(time(0));
	int numero = rand() % 100;

	// VARIANTE 3:
	// Se l'utente supera MAX_TENTATIVI, termina il ciclo e stampa 
	// un messaggio di sconfitta, svelando anche il numero da indovinare.

}
