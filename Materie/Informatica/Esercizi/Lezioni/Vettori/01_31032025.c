/* Dati 2 vettori caricati casualmente eseguire uno scambio di valori. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "array.h"
#include "array.c"
#define DIM 4

int main(){

    int v1[DIM]={0},v2[DIM]={0};

    riempivettorecasuale(v1, DIM, 10, 40);
    riempivettorecasuale(v2, DIM, 10, 40);

    scambiovettori(v1, v2, DIM);

    printf("\n");
    stampavettore(v1, DIM, ' ');
    printf("\n");
    stampavettore(v2, DIM, ' ');
    
}