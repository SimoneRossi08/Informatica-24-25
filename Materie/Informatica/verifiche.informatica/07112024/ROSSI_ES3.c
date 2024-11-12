/*DATA UNA COPPIA DI NUMERI INTERI COSTRUIRE UN MENÙ TALE CHE
PREVEDA:
1) LA SOMMA IN VALORE ASSOLUTO;
2) LA DIFFERENZA TRA IL MAGGIORE E IL MINORE;
3) GENERATO UN VALORE K(INTERO) DETERMINARE CHI DEI VALORI SI
AVVICINA DI PIÙ;
4) DETERMINARE SE UNO È MULTIPLO DELL’ALTRO.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    srand(time(NULL));

    int n1,n2,k,op,r;
    int max=10000;
    int min=1;

    printf("Inserisci il primo numero: \n");
    scanf("%d", &n1);
    printf("Inserisci il secondo numero: \n");
    scanf("%d", &n2);

    printf("Scegli quale operazione vuole eseguire: \n");
    printf("1) La somma in valore assoluto. \n");
    printf("2) La differenza tra il maggiore e il minore. \n");
    printf("3) Generare un valore casuale e determinare a quale valore si avvicina di più. \n");
    printf("4) Determinare se sono multipli tra loro. \n\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        r=n1+n2;
        printf("La somma di %d e %d in valore assoluto vale %d", n1, n2, r);
        break;
    case 2:
        if(n1>n2){
            r=n1-n2;
            printf("La differenza di %d e %d tra il maggiore e il minore vale %d", n1, n2, r);
        }
        else if(n2>n1){
            r=n2-n1;
            printf("La differenza di %d e %d tra il maggiore e il minore vale %d", n2, n1, r);
        }
        break;
    case 3:
        k=rand()%10+1;
        if(k-n1>k-n2){
            printf("Il valore %d si avvicina di più a %d", k, n2);
        }
        else if(k-n2>k-n1){
            printf("Il valore %d si avvicina di più a %d", k, n1);
        }
        break;
    case 4:
        if(n1>n2){
            r=n1/n2;
            if(r%2==0){
                printf("%d e %d  sono multipli tra loro", n1, n2);
            }
            else{
                printf("%d e %d non sono multipli tra loro", n1, n2);
            }
        if(n2>n1){
            r=n2/n1;
            if(r%2==0){
                printf("%d e %d  sono multipli tra loro", n1, n2);
            }
            else{
                printf("%d e %d non sono multipli tra loro", n1, n2);
            }
        }
        else{
            printf("%d e %d  sono multipli tra loro", n1, n2);
        }
        break;
    default:
        printf("L'operazione scelta non esiste.");
        return 0;
        break;
    }
    return 0;
    }
}

