//es 11 pag 247
/* Scrivi un programma che, dati in input n numeri
interi e un numero x determini:
- quanti numeri maggiori di x
- quanti numeri sono minori di x
- quanti numeri sono uguali x */

#include <stdio.h>

int main(){

    int n,x,c=0,nMx=0,nmx=0,nux=0;

    printf("Inserisci un valore ad X: ");
    scanf("%d", &x);
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
        c++;
        if(n==x){
            nux++;
        }
        if(n>x){
            nMx++;
        }
        if(n<x){
            nmx++;
        }
    }
    while(c!=10);

    printf("I numeri maggiori di x sono %d. \n", nMx);
    printf("I numeri minori di x sono %d. \n", nmx);
    printf("I numeri uguali a x sono %d. \n", nux);

    return 0;
}