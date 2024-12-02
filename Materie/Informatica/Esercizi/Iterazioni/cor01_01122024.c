/*Scrivi un programma che effettua il prodotto tra due numeri utilizzando il
metodo delle somme successive dopo aver controllato l’input e accettato
                    solo valori maggiori di 0.*/

#include <stdio.h>

int main(){

    int n1=0,n2=0,i,somma=0;

    do{
        printf("Inserisci il primo valore: ");
        scanf("%d", &n1);
    }
    while(n1<=0);

    do{
        printf("Inserisci il secondo valore: ");
        scanf("%d", &n2);
    }
    while(n2<=0);

    for(i=0; i<n1; i++){
        somma+=n2;
        printf("Il prodotto tra %d e %d vale %d. ", n1, n2, somma);
    }
    return 0;
}