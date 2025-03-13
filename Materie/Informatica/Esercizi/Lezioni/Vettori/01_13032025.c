/* Inizializzato l'array con i multipli di 2 stamparlo al contrario */

#include <stdio.h>
#define max 10

int main(){

    int v[max],j=1;

    for(int i=0; i<max; i++){
        v[i]=j*2;
        j++;
    }

    for(int i=max-1; i>=0; i--){
        printf("%d\t", v[i]);
    }

    return 0;
}