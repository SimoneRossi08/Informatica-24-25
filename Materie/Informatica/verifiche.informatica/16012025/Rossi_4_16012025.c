/* Richiesti due numeri da tastiera verifica e comunica se sono numeri Amici/Amicali.
Definizione di numeri Amicali: due numeri si dicono amicali se la somma dei divisori del primo
numero è uguale al secondo numero e viceversa. */

#include <stdio.h>
int main(){
    
    int n1,n2,d1,sd,c=0;

    printf("Inserisci due numeri: ");
    scanf("%d", &n1);
    scanf("%d", &n2);

    c=n1;

    do{
        if(n1%c==0){
            d1=c;
            sd+=d1;
        }
        c--;
    }
    while(c!=0);

    if(sd==n2){
        printf("I numeri %d e %d sono amicali. ", n1, n2);
    }
    else{
        printf("I numeri %d e %d non sono amicali. ", n1, n2);
    }
}