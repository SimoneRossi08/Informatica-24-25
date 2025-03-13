/* Si scriva un programma in linguaggio C che letto un numero intero
positivo dello stantard input, visualizzi a terminale il quadrato del
    numero stessi facendo uso soltanto di operazioni di somma.
    - Si osservi che il numero quadrato di ogni
    numero intero positivo N può essere costruito
    sommando tra loro i primi N numeri dispari.
    - Esempio: N=5; P=1+3+5+7+9*/

#include <stdio.h>

void potenza(int *_n, int *_s);

int main(){

    int n,s=0;

    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
    }
    while(n<0);

    potenza(n,s);

    printf("Il quadrato vale %d", s);
}

void potenza(int *_n, int *_s){

int d=1;
    
    for(int i=1; i<=*_n; i++){
        printf("%d\t", d);
        *_s+=d;
        d+=2;
    }
}