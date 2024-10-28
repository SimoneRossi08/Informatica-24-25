/*Creare una sorta di menù (vedi esempio) tramite dei
printf per la scelta dell'operazione da compiere tra
due valori generati casualmente (eseguendo lì dove c'è
bisogno gli opportuni controlli). Comunicare il risultato
dell'operazione o la scelta dell'utente di non fare niente
            e uscire dal programma:
ES: Seleziona l'operazione da eseguire: 
        0.  TERMINA
        1.  SOMMA
        2.  DIFFERENZA
        3.  MOLTIPLICAZIONE
        4.  DIVISIONE */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int op;
    int n1;
    int n2;
    float r;

    int max=10000;
    int min=1;

    srand(time(NULL));
    n1=rand()%(max-min+1)+min;
    n2=rand()%(max-min+1)+min;

    printf("Scegli l'operazione che vuoi eseguire: \n\n");
    printf("1) Addizione\n");
    printf("2) Sottrazione\n");
    printf("3) Moltiplicazione\n");
    printf("4) Divisione\n");
    printf("5) Uscire dal programma\n\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        r=n1+n2;
        printf("Il risultato della somma tra %d e %d equivale a %.2f", n1,n2,r);
        break;
    case 2:
        r=n1-n2;
        printf("Il risultato della differenza tra %d e %d equivale a %.2f", n1,n2,r);
        break;
    case 3:
        r=n1*n2;
        printf("Il risultato della moltiplicazione tra %d e %d equivale a %.2f", n1,n2,r);
        break;
    case 4:
        r=(float)n1/n2;
        printf("Il risultato della divisione tra %d e %d equivale a %.2f", n1,n2,r);
        break;
    case 5:
        printf("Nessuna operazione è stata eseguita. Puoi uscire dal programma.");
        return 0;
        break;
    default:
        printf("L'operazione scelta non esiste.");
        break;
    }

    return 0;
}