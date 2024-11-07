/*CONTARE IL NUMERO DI CIFRE DI CUI SI COMPONE UN NUMERO DATO E
COMUNICARE QUANTE VOLTE COMPARE LA CIFRA DI VALORE K CHIESTA
ALL’UTENTE.
N.B.: accettare valori che vanno da 0 a 9999
ES: 3 è composto da 1 cifra e supponendo k=5 allora k compare 0 volte, 56 è composto
da 2 cifre e k compare 1 volta*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,n1,n2,n3,n4,k;

    printf("Inserisci un numero minore di 10.000:\n");
    scanf("%d", &n);

    if(n<10000){
        if(n<10000 && n>999){
            n4=n%10;
            n3=n%100;
            n2=n%1000;
            n1=n/1000;
            printf("Il numero è composto da 4 numeri. ");
            }
        }
        else if(n<1000 && n>99){
            n3=n%10;
            n2=n%100;
            n1=n/100;
            printf("Il numero è composto da 3 numeri. ");
        }
        else if(n<100 && n>9){
            n2=n%10;
            n1=n/10;
            printf("Il numero è composto da 2 numeri. ");
        }
        else if(n<10 && n>0){
            n1=n;
            printf("Il numero è composto da 1 numero. "); 
        }
        printf("\nInserisci un valore: \n");
        scanf("%d", &k);
            if(k==n1 || k==n2 || k==n3 || k==n4){
                if(k==n1 && k==n2){
                    printf("Il valore inserito appare 2 volte.");
                }
                else if(k==n1 && k==n3){
                    printf("Il valore inserito appare 2 volte.");
                }
                else if(k==n1 && k==n4){
                    printf("Il valore inserito appare 2 volte.");
                }
                else if(k==n3 && k==n2){
                    printf("Il valore inserito appare 2 volte.");
                }
                else if(k==n3 && k==n4){
                    printf("Il valore inserito appare 2 volte.");
                }
                else if(k==n4 && k==n2){
                    printf("Il valore inserito appare 2 volte.");
                }
                if(k==n1 && k==n2 && k==n3){
                    printf("Il valore inserito appare 3 volte.");
                }
                else if(k==n1 && k==n2 && k==n4){
                    printf("Il valore inserito appare 3 volte.");
                }
                else if(k==n1 && k==n3 && k==n4){
                    printf("Il valore inserito appare 3 volte.");
                }
                else if(k==n4 && k==n2 && k==n3){
                    printf("Il valore inserito appare 3 volte.");
                }
                if(k==n1 && k==n2 && k==n3 && k==n4){
                    printf("Il valore inserito appare 4 volte.");
                }
                else{
                    printf("Il valore inserito appare 0 volte.");
                }
                if(k==n1){
                    printf("Il valore inserito appare 1 volta.");
                }
                else if(k==n2){
                    printf("Il valore inserito appare 1 volta.");
                }
                else if(k==n3){
                    printf("Il valore inserito appare 1 volta.");
                }
                else if(k==n4){
                    printf("Il valore inserito appare 1 volta.");
                }
            }
    else{
        printf("Il numero supera la soglia richiesta. ");
    }
    return 0;
}