/* Scrivi un programma che legge un numero NUM
strettamente positivo e visualizza tutti i numeri
    pari inferiori a tale numero fino a 0. */

#include <stdio.h>

int main(){

    int n;
  
    do{
        printf("Inserisci un numero positivo: ");
        scanf("%d", &n);
    }while(n<0);

    while(n!=0){
        n=n-2;
        printf("%d ", n);
    }

    return 0;
}
