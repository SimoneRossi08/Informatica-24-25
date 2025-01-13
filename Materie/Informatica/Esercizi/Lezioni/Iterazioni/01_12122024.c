/* Dati N numeri in input (con N chiesto all'utente
strettamente maggiore di 5), calcolare e mostrare
la somma dei numeri negativi e dei numeri positivi. */

#include <stdio.h>

int main(){

    int n1,n2,sp=0,sn=0;

    do{
        printf("Inserisci un numero maggiore di 5: ");
        scanf("%d", &n1);
    }
    while(n1<5);

    for(int i=0; i<n1; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &n2);
        
        if(n2>=0){
            sp=sp+n2;
        }
        else if(n2<=0){
            sn=sn+n2;
        }
        
    }

    printf("La somma dei numeri positivi equivale a %d. \n", sp);
    printf("La somma dei numeri negativi equivale a %d. ", sn);

    return 0;
}