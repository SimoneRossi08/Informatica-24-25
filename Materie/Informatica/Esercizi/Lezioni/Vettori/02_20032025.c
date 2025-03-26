/* Caricato un vettore con valori
random calcolare la media. */

#include <stdio.h>
#include "array.c"
#define DIM 10

int main(){

    int min=0,max=100;
    int v[DIM];

    stampavettore(v,DIM,' ');
    riempivettorecasuale(v, DIM, min, max);
    media(v,DIM);
}