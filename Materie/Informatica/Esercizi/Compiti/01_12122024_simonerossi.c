/* Dati N numeri in input (N è un numero scelto dall'utente maggiore di 2) determinare
    il valore più piccolo tra quelli incontrati, indicandone il numero d'ordine
    (cioè se era il primo numero inserito, il secondo o terzo e così via). */

#include <stdio.h>

int main(){
    int n,v,nm=0,cnt=0;

    printf("Inserisci un numero: ");
    scanf("%d", &v);

    for(int i=0; i<=v; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &n);
        if(n<nm){
            nm=n;
            cnt++;
        }
        
    }

    printf("Il numero minore è %d e il numero d'ordine equivale a %d. ", nm, cnt);

}
