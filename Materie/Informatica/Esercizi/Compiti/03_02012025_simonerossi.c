/* Scrivi un programma che realizzi il seguente gioco tra N giocatori umani e il
computer. All’inizio del gioco ogni giocatore ha un uguale numero NUM di fiches.
Vengono giocate alcune manches dove a ogni turno ciascun giocatore effettua una
puntata di una fiche e riceve dal banco casualmente una carta:
il giocatore con la carta più alta vince tutte le fiches puntate nella mano corrente;
se c’è più di un singolo giocatore con la carta più alta, il banco prende tutto.
Il gioco termina quando un giocatore ha perso tutte le fiches. */

#include <stdio.h>

int main(){

    srand(time(NULL));
    int p,f=50,m,b,c;

    do{
    printf("Inserisci il numero di giocatori: ");
    scanf("%d", &p);
    }
    while(p<0);
    for(int m=0; f<=0; m--){
        if(f==){
            int c=rand()%(50-1+1)+1;
        }
        if(==){
            b=f;
        }
    }
    return 0;
}   