/*Scrivi un programma in C che permetta di inserire 1 voto di uno studente.
        Poi genera casualmente un secondo voto compreso tra 4 e 8.
        Quindi permetta di scegliere quale operazione fare tra:
            - 1 mostrare la media dei due voti
            - 2 mostrare il voto maggiore tra i due
            - 3 mostrare il voto minore tra i due.
            - 4 mostrare il numero di voti sufficiente tra i due.
        Verificare che il voto inserito sia compreso tra 2 e 10.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    float v1,v2,m;
    int op;

    printf("Inserisci il primo voto: ");
    scanf("%f", &v1);

    if(v1>=2 && v1<=10){

        srand(time(NULL));
        v2=rand()%5+4;
        printf("\nIl secondo voto è %.0f. ", v2);
        
        printf("\nScegli un'operazione da eseguire:");
        printf("\n1) La media dei due voti.");
        printf("\n2) Mostrare il voto maggiore tra i due.");
        printf("\n3) Mostrare il voto minore tra i due.");
        printf("\n4) Mostrare il numero di voti sufficiente tra i due.\n\n");
        scanf("%d",&op);

        switch(op)
        {
        case 1:
            m=(v1+v2)/2;
            printf("La media dei due voti vale %.1f.", m);
            break;
        case 2:
            if(v1>v2){
                printf("Il voto maggiore è %.1f.", v1);
            }
            else if(v2>v1){
                printf("Il voto maggiore è %.1f.", v2);
            }
            else{
                printf("I due voti sono identici.");
            }
            break;
        case 3:
            if(v1>v2){
                printf("Il voto minore è %.1f.", v2);
            }
            else if(v2>v1){
                printf("Il voto minore è %.1f.", v1);
            }
            else{
                printf("I due voti sono identici.");
            }
            break;
        case 4:
            if(v1>5 && v2>5){
                printf("Il numero di voti sufficenti è 2.");
            }
            if(v1<5 && v2<5){
                printf("I numero di voti sufficenti è 0.");
            }
            if(v1>5 || v2>5){
                printf("Il numero di voti sufficenti è 1.");
            }
            break;
        default:
            printf("L'operazione scelta non esiste.");
            return 0;
            break;
        }
    }
    else{
        printf("\nIl voto inserito non è compreso tra 2 e 10.");
    }
    return 0;
}