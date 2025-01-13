/* Scrivi un programma che esegue il calcolo del fattoriale
            di un numero num inserito. */

#include <stdio.h>
int main() {

    int n,nf=1,nv;

        printf("Inserisci un numero: ");
        scanf("%d", &n);
        nv=n;

        for(int i=1; i=1; i<=n; i++){
            nf*=i;
        }

        printf("Il calcolo fattoriale del numero %d vale %d. ", nv, nf);

    return 0;
}