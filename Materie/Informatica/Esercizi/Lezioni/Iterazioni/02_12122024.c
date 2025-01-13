/* Dati in input 10 numeri interi determinare il
    valore maggiore e quante volte compare. */

#include <stdio.h>

int main(){

    int n,nm=0,cnt=0;

    for(int i=0; i<10; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &n);
        if(n>nm){
            nm=n;
            cnt=0;
        }
        else if(nm==n){
            cnt++;
        }
    }

    printf("Il numero maggiore è %d ed è comparso %d volte", nm, cnt);

}
