/* Supponete che la parità di scambio tra Euro e Dollaro sia la seguente: 1 € =
    1,23 $. Il programma deve chiedere all'utente se intende cambiare:     
            - Dollari in Euro;
            - Euro in Dollari.
        Data una somma di denaro calcolare il controvalore. */

#include <stdio.h>
int main(){

    float den=0, dconv=0;
    int scelta=0;
    const float tax=1.23;

    printf("Inserisci una somma di denaro: ");
    scanf("%f", &den);

    printf("Scegli la valuta da convertire: ");
    printf("\n1) Dollari in Euro");
    printf("\n2) Euro in Dollari\n");
    scanf("%d", &scelta);

    switch(scelta)
    {
    case 1:
        dconv=den/tax;
        printf("I %.2f dollari valgono %.2f euro.", den, dconv);
        break;
    case 2:
        dconv=den*tax;
        printf("I %.2f euro valgono %.2f dollari.", den, dconv);
        break;
    
    default:
        printf("ERRORE: L'opzione inserita non esiste.");
        return 0;
        break;
    }
    
    return 0;
}