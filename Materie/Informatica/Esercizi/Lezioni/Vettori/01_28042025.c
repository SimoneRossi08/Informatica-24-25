/* Creiamo un menu di richieste
    1. Caricare un array
    2. Stampare l'array
    3. Ordina l'array tramite BubbleSort */

#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#include "array.c"
#define DIM 5

int main(){

    int v[DIM], scelta;

    do{
        printf("\nMENU: ");
        printf("\n1. Caricare un array. ");
        printf("\n2. Stampare l'array. ");
        printf("\n3. Ordina l'array tramite BubbleSort. ");
        printf("\n4. Scambiare il valore minimo con il valore massimo. ");
        printf("\nDigitare 0 per terminare il programma. \n");
        scanf(" %d", &scelta);

        switch(scelta){
            case 1:
                riempivettore(v, DIM);
                break;
            case 2:
                stampavettore(v, DIM, ' ');
                break;
            case 3:
                bubblesort(v, DIM);
                break;
            case 4:
                scambiominmax(v, DIM);
                break;
            default:
                if(scelta!=0){
                    printf("Opzione inesistente... ");
                }
                break;
        }
    }
    while(scelta!=0);
}