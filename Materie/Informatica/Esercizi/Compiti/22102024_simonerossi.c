/*Scrivi un programma in C che simuli una calcolatrice semplice.
Il programma deve permettere all'utente di scegliere un'operazione
tra somma, sottrazione, moltiplicazione e divisione. Il programma
    deve quindi chiedere due numeri e restituire il risultato
    dell'operazione scelta.  Usare il costrutto switch case.*/


#include <stdio.h> 

int main(){

    int n1=0;
    int n2=0;
    int r=0;
    char op;

    printf("Inserisci il primo numero: ");
    scanf("%d", &n1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &n2);
    printf("Scegli l'operazione che vuoi fare tra queste opzioni:\na (addizione), s (sottrazione), m (moltiplicazione), d (divisione)");
    scanf(" %c", &op);

    switch(op){
        case 'a': 
            r=n1+n2;
            printf("Il risultato dell'addizione tra i due numeri risulta: %d.", r);
            break;
        case 'm': 
            r=n1*n2;
            printf("Il risultato della moltiplicazione tra i due numeri risulta: %d.", r);
            break;
        case 's':
            r=n1-n2;
            printf("Il risultato della sottrazione tra i due numeri risulta: %d.", r);
            break;
        case 'd':
            r=n1/n2;
            printf("Il risultato della divisione tra i due numeri risulta: %d.", r);
            break;
        default: 
            printf("\nL'operazione inserita non esiste.");
            break;
    }
    
    return 0;
}