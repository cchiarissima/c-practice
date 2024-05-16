// lizardSpock.c
// Carta forbice sasso lucertola Spock con "hai vinto/perso"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // seed random number generator
    srand(time(NULL));

    // chiede input utente e genera mossa del computer
    int scelta_utente;
    int scelta_computer = rand() % 5 + 1;
    
    printf("Inserisci il numero corrispondente alla mossa che vuoi fare:\n1 = carta\n2 = forbici\n3 = sasso\n4 = lucertola\n5 = Spock\n");
    scanf("%d", &scelta_utente);

    printf("L'utente ha scelto: %d\nIl computer ha scelto: %d\n", scelta_utente, scelta_computer);

    // logica di gioco
    // giocatore sceglie carta
    if (scelta_utente == 1) { 
        if (scelta_computer == 1) {
            printf("Pareggio!");
        } // end if
        else if (scelta_computer == 2 || scelta_computer == 4) {
            printf("Hai perso :(");
        } // end else if
        else if (scelta_computer == 3 || scelta_computer == 5) {
            printf("Hai vinto!");
        } // end else if
    } 

    // giocatore sceglie forbici
    if (scelta_utente == 2) { 
        if (scelta_computer == 1 || scelta_computer == 4) {
            printf("Hai vinto!");
        } // end if
        else if (scelta_computer == 2) {
            printf("Pareggio!");
        } // end else if
        else if (scelta_computer == 3 || scelta_computer == 5) {
            printf("Hai perso :(");
        } // end else if
    } 

    // giocatore sceglie sasso
    if (scelta_utente == 3) { 
        if (scelta_computer == 1 || scelta_computer == 5) {
            printf("Hai perso :(");
        } // end if
        else if (scelta_computer == 2 || scelta_computer == 4) {
            printf("Hai vinto!");
        } // end else if
        else if (scelta_computer == 3) {
            printf("Pareggio!");
        } // end else if
    } 

    // giocatore sceglie lucertola
    if (scelta_utente == 4) { 
        if (scelta_computer == 1 || scelta_computer == 5) {
            printf("Hai vinto!");
        } // end if
        else if (scelta_computer == 2 || scelta_computer == 3) {
            printf("Hai perso :(");
        } // end else if
        else if (scelta_computer == 4) {
            printf("Pareggio!");
        } // end else if
    } 

    // giocatore sceglie Spock
    if (scelta_utente == 5) { 
        if (scelta_computer == 1 || scelta_computer == 4) {
            printf("Hai perso :(");
        } // end if
        else if (scelta_computer == 2 || scelta_computer == 3) {
            printf("Hai vinto!");
        } // end else if
        else if (scelta_computer == 5) {
            printf("Spock contro Spock: pareggio!");
        } // end else if
    } 
} // end function main