//es 17 pag 223
/* Scrivi un programma che ricerca i primi 3
numeri perfetti e li visualizza sullo schermo 
    ES: n=6 div=1,2,3 somma=1+2+3=6 
            6 - 28 - 496*/

#include <stdio.h>

int main(){

    int s=0;

    for(int i=1; i<500; i++){
        for(int j=1; j<=i/2; j++){
            if(i%j==0){
               s+=j;
            }
        }
        if(s==i){
                printf("\nIl numero %d è un numero perfetto. ",i);
        }
        s=0;
    }

    return 0;
}