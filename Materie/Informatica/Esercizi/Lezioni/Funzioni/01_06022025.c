/* Calcolare il fattoriale di un numero. */

#include <stdio.h>

long fattoriale(int _n);

int main(){

    int n;
    long f;

    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
    }
    while(n<=0);
    
    f=fattoriale(n);

    printf("Il numero fattoriale del numero %d vale %ld. ", n, f);
}

long fattoriale(int _n){

    long nf=1;

    do{
        nf*=(_n);
        _n--;
    }
    while(_n!=0);

    return nf;
}