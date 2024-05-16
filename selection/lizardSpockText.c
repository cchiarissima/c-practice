// lizardSpockText.c
// Carta forbice sasso lucertola Spock con spiegazione mosse

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
            printf("Carta contro carta: pareggio!");
        } // end if
        else if (scelta_computer == 2) {
            printf("Le forbici tagliano la carta: l'utente perde :(");
        }  // end else if
        else if (scelta_computer == 3) {
            printf("La carta avvolge il sasso: l'utente vince!");
        }  // end else if
        else if (scelta_computer == 4) {
            printf("La lucertola mangia la carta: l'utente perde :(");
        }  // end else if
        else if (scelta_computer == 5) {
            printf("La carta invalida Spock: l'utente vince!");
        }  // end else if
    } 

    // giocatore sceglie forbici
    if (scelta_utente == 2) { 
        if (scelta_computer == 1) {
            printf("Le forbici tagliano la carta: l'utente vince!");
        } // end if
        else if (scelta_computer == 2) {
            printf("Forbici contro forbici: pareggio!");
        }  // end else if
        else if (scelta_computer == 3) {
            printf("Il sasso rompe le forbici: l'utente perde :(");
        }  // end else if
        else if (scelta_computer == 4) {
            printf("Le forbici decapitano la lucertola: l'utente vince!");
        }  // end else if
        else if (scelta_computer == 5) {
            printf("Spock rompe le forbici: l'utente perde :(");
        }  // end else if
    } 

    // giocatore sceglie sasso
    if (scelta_utente == 3) { 
        if (scelta_computer == 1) {
            printf("La carta avvolge il sasso: l'utente perde :(");
        }  // end if
        else if (scelta_computer == 2) {
            printf("Il sasso rompe le forbici: l'utente vince!");
        }  // end else if
        else if (scelta_computer == 3) {
            printf("Sasso contro sasso: pareggio!");
        }  // end else if
        else if (scelta_computer == 4) {
            printf("Il sasso schiaccia la lucertola: l'utente vince!");
        }  // end else if
        else if (scelta_computer == 5) {
            printf("Spock vaporizza il sasso: l'utente perde :()");
        }  // end else if
    } 

    // giocatore sceglie lucertola
    if (scelta_utente == 4) { 
        if (scelta_computer == 1) {
            printf("La lucertola mangia la carta: l'utente vince!");
        } // end if
        else if (scelta_computer == 2) {
            printf("Le forbici decapitano la lucertola: l'utente perde :(");
        } // end else if
        else if (scelta_computer == 3) {
            printf("Il sasso schiaccia la lucertola: l'utente perde :(");
        } // end else if
        else if (scelta_computer == 4) {
            printf("Lucertola contro lucertola: pareggio!");
        } // end else if
        else if (scelta_computer == 5) {
            printf("La lucertola avvelena Spock: l'utente vince!");
        } // end else if
    } 

    // giocatore sceglie Spock
    if (scelta_utente == 5) { 
        if (scelta_computer == 1) {
            printf("La carta invalida Spock: l'utente perde :(");
        } // end if
        else if (scelta_computer == 2) {
            printf("Spock rompe le forbici: l'utente vince!");
        } // end else if
        else if (scelta_computer == 3) {
            printf("Spock vaporizza il sasso: l'utente vince!");
        } // end else if
        else if (scelta_computer == 4) {
            printf("La lucertola avvelena Spock: l'utente perde :(");
        } // end else if
        else if (scelta_computer == 5) {
            printf("Spock contro Spock: pareggio!");
        } // end else if
    } 
} // end function main