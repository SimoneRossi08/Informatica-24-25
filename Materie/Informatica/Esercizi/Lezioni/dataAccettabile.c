/*data una data in formato gg mm aaaa
verificare se la data è accettabile*/

#include <stdio.h>

int main(){

    int g,m,a,b=0;

    //richiesta degli input
    printf("Inserisci il giorno: ");
    scanf("%d", &g);
    printf("Inserisci il mese: ");
    scanf("%d", &m);
    printf("Inserisci l'anno: ");
    scanf("%d", &a);

    //controllo dell'anno
    //un anno è bisestile se è multiplo di 4 ma non di 100 e 400 oppure multiplo di 400
    if(a%100==0){
        if(a%400==0){
            printf("L'anno è bisestile");
            b=1;
        }
    }
    else{
        if(a%4==0){
            printf("L'anno è bisestile");
            b=1;
        }
    }

    //controllo del mese e del giorno
    if(m>=1 && m<=12){
        if(m==2){
            if(g>=1 && g<=28+b){
                printf("\nLa data è accettabile");
            }
            else{
                printf("\nLa data non è accettabile");
            }
        }
        else{
            if(m==11 || m==4 || m==6 || m==9){
                if(g>=1 && g<=30){
                    printf("\nLa data è accettabile");
                }
                else{
                    printf("\nLa data non è accettabile");
                }
            }
            else{
                if(g>=1 && g<=31){
                    printf("\nLa data è accettabile");
                }
                else{
                    printf("\nLa data non è accettabile");
                }
            }
        }   
    }
    else{
        printf("\nLa data non è accettabile");
    }
}