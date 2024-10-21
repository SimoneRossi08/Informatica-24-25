/* Conversione di un dato in decimale in un dato in
    binario introducendo un valore da 0 a 63 */

#include <stdio.h>

int main(){

    int num,quoz,n0,n1,n2,n3,n4,n5;

    printf("Inserisci un numero compreso tra 0 63: ");
    scanf("%d", &num);

    quoz=num;

    if(num>=0 && num<=63){
        //convertiamo il numero
        if(quoz!=0){
            n0=quoz%2; //in n0 abbiamo inserito il resto del bit meno significativo
            quoz=quoz/2; //abbiamo aggiornato il nuovo valore del quoziente
        }
        if(quoz!=0){
            n1=quoz%2; //in n1 abbiamo inserito il resto del bit meno significativo
            quoz=quoz/2; //abbiamo aggiornato il nuovo valore del quoziente
        }
        if(quoz!=0){
            n2=quoz%2; //in n2 abbiamo inserito il resto del bit meno significativo
            quoz=quoz/2; //abbiamo aggiornato il nuovo valore del quoziente
        }
        if(quoz!=0){
            n3=quoz%2; //in 3 abbiamo inserito il resto del bit meno significativo
            quoz=quoz/2; //abbiamo aggiornato il nuovo valore del quoziente
        }
        if(quoz!=0){
            n4=quoz%2; //in n4 abbiamo inserito il resto del bit meno significativo
            quoz=quoz/2; //abbiamo aggiornato il nuovo valore del quoziente
        }
        if(quoz!=0){
            n5=quoz%2; //in n5 abbiamo inserito il resto del bit meno significativo
            quoz=quoz/2; //abbiamo aggiornato il nuovo valore del quoziente
        }
        printf("Il numero decimale %d in binario vale: %d%d%d%d%d%d", num,n5,n4,n3,n2,n1,n0);

    }
    else
        printf("Il valore inserito non rispetta le richieste. ");
}