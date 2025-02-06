/* Calcolare il fattoriale di un numero. */

#include <stdio.h>

void fattoriale(int *_n, long *_f);

int main(){

    int n;
    long f=1;

    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
    }
    while(n<=0);
    
    fattoriale(&n, &f);

    printf("Il numero fattoriale del numero %d vale %ld. ", n, f);
}

void fattoriale(int *_n, long *_f){

    for(int i=1; i<=*_n; i++){
        *_f*=i;
    }
}