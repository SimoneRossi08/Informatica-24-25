/* Date N coppie di numeri (con N generato casualmente con valori compresi tra 2 e 7)
    contare e stampare quelle che hanno i valori l'uno l'opposto dell'altro.
                    (ad esempio 3 e -3 oppure -7 e 7) */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    srand(time(NULL));
    int nc=0,n1,n2,cc=1,co=0,ov;

    nc=random()%6+2;

        do{
            printf("Inserisci due numeri: ");
            scanf("%d", &n1);
            scanf("%d", &n2);

            if(n1==n2*-1){
                co++;
                printf("I numeri %d e %d sono opposti fra loro. \n", n1, n2);
            }
            cc++;
        }while(cc<=nc);

        printf("Il numero di coppie che contengono due numeri opposti fra loro sono %d. ", co);

    return 0;
}