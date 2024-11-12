/*INSERIRE UNA SERIE DI VALORI FIN QUANDO LA LORO SOMMA NON SUPERA
200, CALCOLARNE LA MEDIA E IL NUMERO DI VALORI INSERITI.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1,n2,n3,n4;
    float m;

    printf("Inserisci un valore: ");
    scanf("%d",n1);
    if(n1<200){
        printf("\nInserisci un valore: ");
        scanf("%d",n2);
        if(n1+n2<200){
            printf("\nInserisci un valore: ");
            scanf("%d",n3);
            if(n1+n2+n3<200){
                printf("\nInserisci un valore: ");
                scanf("%d", n4);
                if(n1+n2+n3<200){
                    printf("\nHai terminato le 4 possibilità... ");
                }
                else{
                    m=(n1+n2+n3+n4)/4;
                    printf("\nLa media tra i valori inseriti vale %.2f.", m);
                }
            }
            else{
                m=(n1+n2+n3)/3;
                printf("\nLa media tra i valori inseriti vale %.2f.", m);
            }
        }
        else{
            m=(n1+n2)/2;
            printf("\nLa media tra i valori inseriti vale %.2f.", m);
        }
    }
    return 0;
}

