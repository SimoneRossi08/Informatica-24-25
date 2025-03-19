/* Crea i file necessari per una libreria che contenga le funzioni principali
degli array (come quella fatta in classe). Quindi scrivi un programma che permetta
di riempire un vettore di 30 elementi con valori casuali compresi tra 0 e 10 e una
    funzione che restituisca il numero di volte in cui compare un valore
                (compreso tra 0 e 10) scelto dall'utente. */

#include <stdio.h>
#include "array.h"
#include "array.c"

#define D 30

void stampaDueMax(int v[], int d);

int main(){

    int v[D];

    riempivettorecasuale(v, D, 0, 10);
    stampascelta(v, D);
}
void stampascelta(int v[], int d){

    int n,c=0;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    for(int i=1; i<d; i++){
        if(v[i]==n){
            c++;
        }
    }

    printf("Il numero %d appare %d volte. ", n, c);
}