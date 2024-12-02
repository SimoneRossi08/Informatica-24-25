/*Scrivi un programma che effettua il prodotto tra due numeri utilizzando il
metodo delle somme successive dopo aver controllato l’input e accettato
                    solo valori maggiori di 0.*/

#include <stdio.h>

int main(){

    int n1=0,n2=0,p=0;

    do{
        printf("Scrivi il primo numero maggiore di 0: ");
        scanf("%d", &n1);
        printf("Scrivi il secondo numero maggiore di 0: ");
        scanf("%d", &n2);
    }
    while(n1<=0 && n2<=0);

    for(int i=1; i<=n2; i++){
        p+=n1;
        printf("%d ", p);
    }
    return 0;
}