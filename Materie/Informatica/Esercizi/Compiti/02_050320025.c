/* Dato un valore eseguire la conversione da decimale a binario. */

long conversione(int n);

#include <stdio.h>
#include <math.h>

int main(){

    int n;
    long b;

    printf("Inserisci un valore: ");
    scanf("%d", &n);

    b=conversione(n);
    printf("%d",b);
}

long conversione(int n){

    int r=0,b=0,c=0;

    do{
        r=n%2;
        n=n/2;
        b+=r*pow(10,c);
        c++;
    }
    while(n!=0);

    return b;
}