/* Dati in input 10 numeri interi determinare il
    valore maggiore e cuante volte compare. */

#include <stdio.h>

int main(){

    int n,nm=0,cont=0,cnt=0;

    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
        cont++;
        if(n>nm){
            nm=n;
            cnt=0;
        }
        if(nm==n){
            cnt++;
        }
    }
    while(cont<=10);


    printf("Il numero maggiore è %d ed è comparso %d volte", nm, cnt);

}