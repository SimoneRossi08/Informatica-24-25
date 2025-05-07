/* DATO UN ARRAY CALCOLARE QUANTI VALORI PARI E QUANTI VALORI DISPARI */

#include <stdio.h>
#include <stdlib.h>
#define DIM 10

int main(){

    int v[DIM],cp=0,cd=0;

    for(int i=0; i<DIM; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &v[i]);
    }

    for(int i=0; i<DIM; i++){
        if(v[i]%2==0){
            cp++;
        }
        else{
            cd++;
        }
    }
    printf("\nI numeri pari sono %d", cp);
    printf("\nI numeri dispari sono %d", cd);
}