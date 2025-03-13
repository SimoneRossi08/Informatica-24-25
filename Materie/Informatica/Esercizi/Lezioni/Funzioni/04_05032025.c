/* Si scriva un programma in linguaggio C che letto un numero intero
positivo dello stantard input, visualizzi a terminale il quadrato del
    numero stesso facendo uso soltanto di operazioni di somma.
    - Si osservi che il numero quadrato di ogni
    numero intero positivo N può essere costruito
    sommando tra loro i primi N numeri dispari.
    - Esempio: N=5; P=1+3+5+7+9*/

#include <stdio.h>

int quadrato(int n, int q);

int main(){

    int n,q=0;

    printf("Inserisci un valore: ");
    scanf("%d", &n);
    
    q=quadrato(n, q);

    printf("Il quadrato vale %d. ", q);
}

int quadrato(int n, int q){

    int i=0;
        
    do{
        if(i%2==1){
            q+=i;
            i++;
        }
    }
    while(i<=n);

    return q;
}