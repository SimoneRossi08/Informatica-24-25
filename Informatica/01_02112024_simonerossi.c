/* Supponete che la parità di scambio tra Euro e Dollaro sia la seguente: 1 € =
    1,23 $. Il programma deve chiedere all'utente se intende cambiare:     
            - Dollari in Euro;
            - Euro in Dollari.
        Data una somma di denaro calcolare il controvalore. */

#include <stdio.h>
int main(){

    int conv=0;
    float EU=1;
    float DO=1.23;
    float DEN;

    printf("Inserisci una somma di denaro: ");
    scanf("%d", &DEN);

    printf("Scegli la valuta da convertire: ");
    printf("1) Dollari in Euro");
    printf("2) Euro in Dollari");
    scanf("%d", &conv);

    switch(conv)
    {
    case 1:
        DEN=DO;
        DO/EU=EU;
        printf("I %.2f dollari valgono %.2f euro.", DO, EU);
        break;
    case 2:
        DEN=EU;
        EU*DO=DO;
        printf("I %.2f euro valgono %.2f dollari.", EU, DO);
        break;
    
    default:
        printf("ERRORE: L'opzione inserita non esiste.");
        return 0;
        break;
    }
    return 0;
}