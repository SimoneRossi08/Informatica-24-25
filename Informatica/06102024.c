/*Scrivi un programma che riceva in ingresso un numero minore di
10.000 e dica da quante cifre è formato, quindi separi le migliaia
dalle centinaia dalle decine e dalle unità visualizzandole
            separatamente sullo schermo*/

#include <stdio.h>

int main(){
    
    int ni,m,c,d,u;

    printf("Inserisci un numero minore di 10.000: ");
    scanf("%d",&ni);

    if(ni>=10000){
        printf("Il numero è maggiore di 10.000, inserisci un numero più piccolo.\n");
    } else {
        if(ni<10){
            printf("Il numero %d è composto da 1 cifra.\n",ni);
            u=ni;
            printf("L'unità è %d.\n",u);
        }
        else 
            if(ni<100){
            printf("Il numero %d è composto da 2 cifre.\n",ni);
            d=ni/10;
            u=ni%10;
            printf("La decina è %d e l'unità è %d.\n",d,u);
        }
        else 
            if(ni<1000){
            printf("Il numero %d è composto da 3 cifre.\n",ni);
            c=ni/100;
            d=(ni/10)%10;
            u=ni%10;
            printf("La centinaia è %d, la decina è %d e l'unità è %d.\n",c,d,u);
        }
        else{
            printf("Il numero %d è composto da 4 cifre.\n",ni);
            m=ni/1000;
            c=(ni/100)%10;
            d=(ni/10)%10;
            u=ni%10;
            printf("Le migliaia sono %d, le centinaia sono %d, le decine sono %d e l'unità è %d.\n",m,c,d,u);
        }
    }

    return 0;
}
