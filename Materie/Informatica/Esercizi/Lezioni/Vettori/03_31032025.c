/* Scrivi un programma che ordini un vettore in ordine decrescente usando il metodo bubble sort. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "array.h"
#include "array.c"
#define DIM 15

int main(){

    int v[DIM],t,flag=0,i=0,d=DIM;

    srand(time(NULL));

    riempivettorecasuale(v, DIM, 0, 100);
    stampavettore(v, DIM, ' ');
    printf("\n");

    while(flag==0){
        flag=1;
        
        for(int j=0; j<d-1-i; j++){
            if(v[j]<v[j+1]){
                flag=0;

                t=v[j];
                v[j]=v[j+1];
                v[j+1]=t;
            }
        }
        i++;
    }

    stampavettore(v, DIM, ' ' );

}