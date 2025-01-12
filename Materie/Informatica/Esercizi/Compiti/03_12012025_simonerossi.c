/* Scrivi un programma che effettua il calcolo della media dei voti della pagella,
inserendoli uno alla volta e chiedendo a ogni inserimento di un numero se i voti da
        inserire sono terminati accettando come risposta S oppure N */

#include <stdio.h>
int main() {

    char t;
    float v,sv=0,m;
    int c=0;

    do{
        printf("Inserisci il voto: ");
        scanf("%f", &v);
        sv+=v;
        c++;
        printf("I voti da inserire sono terminati? ");
        scanf(" %c", &t);
    }
    while(t!='S' && t!='s');

    m=sv/c;
    printf("La media dei voti vale: %.2f", m);

    return 0;
}