/* Inizializzazione riepmpimento con valori pari. stampa
creazione di una libreria personale. */

#include <stdio.h>
#include "array.c"

#define DIM 10
int main(){

    int vettore[DIM]={0};
    
    riempivettore(vettore,DIM);
    stampavettore(vettore,DIM,'-');
}