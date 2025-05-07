/* DATO UN ARRAY ESEGUIRE LA MEDIA DEI SUOI VALORI */

#include <stdio.h>
#include <stdlib.h>
#define DIM 10

int main(){

    int v[DIM],cnt=0;
    float m,s=0;

    for(int i=0; i<DIM; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &v[i]);
    }

    for(int i=0; i<DIM; i++){
        s+=v[i];
        cnt++;
    }

    m=s/cnt;

    printf("\nLa media dell'array vale %.2f. ", m);
}