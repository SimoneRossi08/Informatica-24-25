/* Scrivi un programma in C che generi un numero casuale compreso
    tra 1 e 20 e permetta all'utente di indovinarlo in massimo 5
    tentativi. Usa la variabile flag per capire quando viene
                indovinata la variabile. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int max=20;
    int min=1;
    int tent=0;
    int num;
    int random=rand()%(max-min+1)+min;
    int flag=0;

    printf("Indovina il numero casuale tra 1 e 20, hai 5 tentativi. \n");

    printf("Tentativo 1: ");
    scanf("%d", &num);
    if(num==random){
        flag=1;
    }
    else
        printf("Non hai indovinato.\n");
    
    printf("Tentativo 2: ");
    scanf("%d", &num);
    if(num==random){
        flag=1;
    }
    else
        printf("Non hai indovinato.\n");
    
    printf("Tentativo 3: ");
    scanf("%d", &num);
    if(num==random){
        flag=1;
    }
    else
        printf("Non hai indovinato.\n");

    printf("Tentativo 4: ");
    scanf("%d", &num);
    if(num==random){
        flag=1;
    }
    else
        printf("Non hai indovinato.\n");

    printf("Tentativo 5: ");
    scanf("%d", &num);
    if(num==random){
        flag=1;
    }
    else
        printf("Non hai indovinato.\n");

    if(flag==1)
        printf("Hai indovinato il numero! Il numero è %d.\n", random);
    else
        printf("Hai esaurito i tentativi. Il numero era %d.\n", random);

    return 0;
}

