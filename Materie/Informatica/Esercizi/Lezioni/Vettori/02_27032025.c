/* Dati 2 vettori chiamati A e B di dimensione uguale scambiare i valori dei vettori. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "array.h"
#include "array.c"
#define DIM 50

int main(){

    int a[DIM],b[DIM], dim=DIM;
    int t[DIM];

    riempivettorecasuale(a, DIM, 0, 100);
    riempivettorecasuale(b, DIM, 0, 1000);

    printf("Vettore A: \n");
    stampavettore(a, DIM, ' ');

    printf("\nVettore B: \n");
    stampavettore(b, DIM, ' ');

    for(int i=dim; i>1; i--){
        t[i]=a[i];
        a[i]=b[i];
        b[i]=t[i];
    }

    printf("\n\nVettore A: \n");
    stampavettore(a, DIM, ' ');

    printf("\nVettore B: \n");
    stampavettore(b, DIM, ' ');

}