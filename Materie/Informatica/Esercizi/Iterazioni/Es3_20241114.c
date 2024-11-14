/* LEGGERE UNA SEQUENZA DI NUMERI, VISUALIZZARLA E
    DETERMINARE QUANTI NUMERI SONO STATI INSERITI.
    SI TERMINA NON APPENA SI ARRIVA AD UNO 0. */

#include <stdio.h>

int main(){

    int n,cnt=1;

    printf("Inserisici un numero: ");
    scanf("%d", &n);

    while(n!=0){
        printf("Il valore inserito è: %d", n);

        printf("\nInserisici un altro numero: ");
        scanf("%d", &n);
        cnt++;
    }

    printf("Hai inserito %d valori. ", cnt);

    return 0;
}