/* Calcolare quanti e quali numeri primi sono presenti in un ampio intervallo di valori.
Definizione di numero primo: un numero si dice primo se è divisibile solo per 1 e per se stesso. */

#include <stdio.h>
int main(){

    int n,ii,fi,t=0,p,c1=0,c2=0;

    printf("Inserisci un intervallo di numeri: ");
    scanf("%d", &ii);
    scanf("%d", &fi);
    
    if(fi<ii){
        t=ii;
        ii=fi;
        fi=t;
    }

    c2=fi;

    do{
        if(fi%1==0 && fi%fi=0 && fi%c2!=0){
            printf("%d\n", n);
            c1++;
        }
        c2--;
    }
    while(fi!=ii);

    printf("I numeri primi presenti sono: %d. ", c1);
    
}