    /* Scrivi un programma che legge una sequenza di numeri interi
terminanti con uno 0 (cioè il programma termina quando viene inserito 0)
    e ne ricerca il valore minimo visualizzandolo sullo schermo.. */

#include <stdio.h>

int main(){

    int n,min;
  
    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
        if(n<0 || n>0){
        if(n<min)
            min=n;
        }
    }while(n!=0);

    printf("Il numero minore vale: %d", min);

    return 0;
}
