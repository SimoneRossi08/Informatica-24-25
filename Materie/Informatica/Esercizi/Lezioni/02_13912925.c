/* Scrivi un programma che visualizzi la somma dei quadrati
    dei primi 12 numeri naturali successivi a 8 */

#include <stdio.h>
int main() {

    int inizio,q,s=0;

    printf("Inserisci il valore iniziale: ");
    scanf("%d", &inizio);
    do{
        printf("Inserisci quanti elementi vuoi considerare: ");
        scanf("%d", &q);
    }
    while(q<=0);

    for(int i=inizio+1; i<inizio+1; i++){
        s+=i^i;
    }
    printf("La somma dei %d valori da %d vale: ", q,inizio,s);
    return 0;
}