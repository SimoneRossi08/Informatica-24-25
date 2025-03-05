    /* Data una sequenza di valori verificare se i valori presi a coppie
risultano ad essere amicali, si termina quando uno dei due valori è zero. */

#include <stdio.h>

void amicali(int n1, int n2);

int main(){

    int n1,n2;

    do{
        printf("\nInserisci il primo numero: ");
        scanf("%d", &n1);
        printf("Inserisci il secondo numero: ");
        scanf("%d", &n2);

        amicali(n1,n2);
    }
    while(n1!=0 || n2!=0);
}

void amicali(int n1, int n2){

    int s1=0,s2=0;

    for(int i=1; i<n1; i++){
        if(n1%i==0){
                s1+=i;
        }
    }
    for(int i=1; i<n2; i++){
        if(n2%i==0){
                s2+=i;
        }
    }

    if(s1==n2 && s2==n1){
        printf("I numeri sono amicali. ");
    }
    else{
        printf("I numeri non sono amicali. ");
    }
}