/*  DATO UN ARRAY SOSTITUIRE TUTTI GLI 0 CON IL VALORE MINIMO */

#include <stdio.h>
#include <stdlib.h>
#define DIM 10

int main(){

    int v[DIM],vm;
    
    for(int i=0; i<DIM; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &v[i]);
    }

    for(int i=DIM; i>0; i--){
        if(v[i]<v[i-1]){
            vm=v[i];
        }
    }

    for(int i=0; i<DIM; i++){
        if(v[i]==0){
            v[i]=vm;
        }
    }

    for(int i=0; i<DIM; i++){
        printf("%d ", v[i]);
    }
}