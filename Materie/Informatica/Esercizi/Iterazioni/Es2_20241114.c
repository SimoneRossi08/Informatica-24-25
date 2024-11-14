/* LEGGERE UNA SEQUENZA DI NUMERI, VISUALIZZARLA.
   SI TERMINA NON APPENA SI ARRIVA AD UNO 0 */

#include <stdio.h>

int main(){

    int n;

    printf("Inserisici un numero: ");
    scanf("%d", &n);

    while(n!=0){

        printf("Il valore inserito è: %d", n);

        printf("\nInserisici un altro numero: ");
        scanf("%d", &n);
    }

    return 0;
}