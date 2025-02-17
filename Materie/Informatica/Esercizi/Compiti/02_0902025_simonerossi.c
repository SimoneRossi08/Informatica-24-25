            /* Scrivete una funzione con parametro un intero n (passato per valore)
che stabilisca se n è un numero primo. La funzione restituirà 1 se il numero è primo altrimenti 0. */

#include <stdio.h>

int nprimo(int _n);

int main(){

    int n;

    printf("Inserisci un numero: ");
    scanf("%d", &n);
    
    nprimo(n);

}

int nprimo(int _n){

    if(_n%1==0 && _n%_n==0 && _n%2!=0 & _n%3!=0){
        printf("1");
    }
    else{
        printf("0");
    }
    return _n;
}