/* Leggere una serie di numeri interi passati dall’utente dopo aver eseguito una scelta che determini se
stampare i valori in senso crescente o decrescente e fermandosi al primo ‘0’ , tale da stampare solo i
valori che rendono la serie crescente o decrescente e restituire quanti numeri erano stati inseriti.
Esempio: scelta=crescente - l’utente inserisce: 8 35 3 8 46 - numeri inseriti: 5. */

#include <stdio.h>
int main(){
    
    int n,nm,c=0,s;

    printf("In quale ordine devono essere i numeri? \n");
    printf("1) Crescente.\n");
    printf("2) Decrescente.\n\n");
    scanf("%d", &s);

    switch(s){
        case 1:
                do{
                    printf("\nInserisci un numero: ");
                    scanf("%d", &n);
                    
                    if(c==1){
                        nm=n;
                    }
                    else if(nm<n){
                        printf("%d ", n);
                        nm=n;
                    }
                    c++;
                }
                while(n!=0);

                printf("\nNumeri inseriti: %d. ",c);
            break;
        case 2:
                do{
                    printf("\nInserisci un numero: ");
                    scanf("%d", &n);

                    if(c==1){
                        nm=n;
                    }
                    else if(nm>n){
                        printf("%d ", n);
                        nm=n;
                    }
                    c++;
                }
                while(n!=0);

                printf("\nNumeri inseriti: %d. ",c);
            break;
        default: 
                printf("\nErrore: Opzione inesistente.");
            break;
    }

    return 0;
}