/*Scrivi un programma che effettua il prodotto tra due numeri utilizzando il
metodo delle somme successive dopo aver controllato l’input e accettato
                    solo valori maggiori di 0.*/

#include <stdio.h>

int main(){

    int n,p;

    do{
        printf("Scrivi un numero maggiore di 0: ");
        scanf("%d", &n);
    }
    while(n<=0);

    for(int i=1; p=n*i; i++){
        printf("%d ", p);
    }

}