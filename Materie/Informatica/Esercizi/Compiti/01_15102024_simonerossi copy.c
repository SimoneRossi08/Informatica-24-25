/*Data una data in formato giorno e mese, dire a che stagione appartiene la data.
Ricordando che primavera va dal 21 marzo al 22 giugno, l'estate va dal 23 giugno
al 22 settembre, l'autunno va dal 23 settembre al 21 dicembre e l'inverno va dal
                    22 dicembre al 20 marzo. */

#include <stdio.h>

int main()
{
    int mese,giorno;

    printf("Inserisci un giorno: ");
    scanf("%d", &giorno);
    printf("Inserisci un mese: ");
    scanf("%d", &mese);

    if(mese>= 12&& mese<=3)
        if(giorno>21||giorno<21){
            printf("Inverno");
        }
    else if(mese>=3 && mese<=6)
        if(giorno>20 || giorno<23){
            printf("Primavera");
        }
    else if(mese>=6 && mese<=9)
        if(giorno>22||giorno<23){
            printf("Estate");
        }
    else if(mese>=9 && mese<=12)
        if(giorno>22||giorno<22){
            printf("Autunno");
        }
    
    if(mese>12 || mese<1 || giorno>31 || giorno<1)
        printf("La data non è controllabile.");

return 0;
}
