#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void stampavettore(int v[], int d, char s){
    for(int i=0; i<d; i++){
        printf("%d%c", v[i], s);
    }
}
void riempivettore(int vettore[], int dim){
    for(int i=0; i<dim; i++){
        printf("inserici l'elemento in posizione di %d: ", i);
        scanf("%d", &vettore[i]);
    }
}
void riempivettorecasuale(int v[], int d, int min, int max){
    srand(time(NULL));
    for(int i=0; i<d; i++){
        v[i]=rand()%(max-min+1)+min;
    }
}
void media(int v[],int dim){

    int somma=0;
    float media=0;

    for(int i=0; i<dim; i++){
        somma+=v[i];
    }

    media=somma/dim;
    printf("\nLa media corrisponde a %.2f. ", media);
}