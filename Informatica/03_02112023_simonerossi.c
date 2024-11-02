/* Un grande magazzino ha 4 reparti, rappresentati con i numeri da 1 a 4.
    La Direzione decide di applicare sui prodotti di ciascun reparto
        sconti con percentuali differenziate: - reparto
            1 = nessuno sconto - reparto
            2 = sconto 3% - reparto
            3 = sconto 2% - reparto
            4 = sconto 5%
    Dati reparto di appartenenza e prezzo di un prodotto, calcolare e
                visualizzare il prezzo scontato. */

#include <stdio.h>
int main(){

    int r;
    float pp,ps;

    printf("Inserisci il reparto e il prezzo del prodotto: ");
    printf("\nReparto: ");
    scanf("%d", &r);
    printf("Prezzo: ");
    scanf("%f", &pp);

    switch(r)
    {
    case 1:
        printf("Non è prensente uno sconto in questo reparto. ");
        break;
    case 2:
        ps=pp*(1-0.03);
        break;
    case 3:
        ps=pp*(1-0.02);
        break;
    case 4:
        ps=pp*(1-0.05);
        break;
    default:
        printf("Il reparto selezionato non esiste. ");
        break;
    }

    if(r!=1){
    printf("Il prezzo scontato è: %.2f", ps);
    }

    return 0;
}
