/* DATO UN ARRAY CALCOLARE LA SOMMA DI TUTTI I VALORI POSITIVI E DI TUTTI I VALORI NEGATIVI */

#include <stdio.h>
#include <stdlib.h>
#define DIM 10

int main(){

    int v[DIM],sp=0,sn=0;

    for(int i=0; i<DIM; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &v[i]);
    }

    for(int i=0; i<DIM; i++){
        if(v[i]>=0){
            sp+=v[i];
        }
        else{
            sn+=v[i];
        }
    }

    printf("\nLa somma dei  numeri positivi equivale a %d. ", sp);
    printf("\nLa somma dei  numeri negativi equivale a %d. ", sn);
}