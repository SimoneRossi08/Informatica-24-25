    /* Scrivete una funzione avente due parametri interi(passati per valore)
b ed e che calcoli la potenza b^e con il metodo delle moltiplicazioni successive. */

#include <stdio.h>

int potenza(int _b, int _e, int _p);

int main(){

    int b,e,p=1;

    printf("Inserisci un numero: ");
    scanf("%d", &b);
    printf("Inserisci un numero: ");
    scanf("%d", &e);
    
    p=potenza(b, e, p);

    printf("La loro potenza equivale a %d. ", p);
}

int potenza(int _b, int _e, int _p){

    int cnt=0;
    cnt=_e;

    do{
        _p*=_b;
        cnt--;
    }
    while(cnt!=0);

    return _p;
}