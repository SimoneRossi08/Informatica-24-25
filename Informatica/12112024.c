/*Scrivi un programma che chieda all'utente un numero
che sia necessariamente maggiore di 3 e che indica quanti
    valori della sequenza di fibonacci mostrare.
Per esempio se l'utente inserisce 6 dovranno essere
        mostrati 1 1 2 3 5 8. Vedi pag 160*/

#include <stdio.h>

int main(){

    int nv,n1=1,n2=1,cnt,n3;

    printf("Inserisci un numero più grande di 3: ");
    scanf("%d", &nv);

    while(nv<3){
        printf("\nInserisci un numero più grande di 3: ");
        scanf("%d", &nv);
    }

    printf("\n%d ", n1);
    printf("%d ", n2);
    cnt=2;
    
    while(cnt<nv){
        n3=n1+n2;
        printf("%d ", n3);
        cnt++;
        n1=n2;
        n2=n3;
    }

    return 0;
}