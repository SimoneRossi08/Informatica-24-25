/* Scrivi un programma che esegue il calcolo del fattoriale di un numero num inserito. */

#include <stdio.h>
int main() {

    int n,nf=1,nv;

        printf("Inserisci un numero: ");
        scanf("%d", &n);
        nv=n;

        do{
            nf*=n;
            n--;
        }
        while(n!=0);

        printf("Il numero fattoriale del numero %d vale %d. ", nv, nf);

    return 0;
}