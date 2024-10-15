/*DATE DUE DATE ESPRESSE IN g, m, a DETERMINARE LA DATA PIU' RECENTE.
Esempio:  tra la data 5/07/2024 e  14/07/2024  la più recente è il 14/07/2024.*/

#include <stdio.h>
int main()
{

    int g1,m1,a1,g2,m2,a2,b;

        //richieste delle due date
        printf ("Inserisci il giorno, il mese e l'anno della prima data: ");
        scanf ("%d %d %d", &g1, &m1, &a1);

        printf ("Inserisci il giorno, il mese, l' anno della seconda data: ");
        scanf ("%d %d %d", &g2, &m2, &a2);

    //controllo della prima data
    if(a1%100==0){
        if(a1%400==0){
            printf("L'anno è bisestile. ");
            b=1;
        }
    }
    else{
        if(a1%4==0){
            printf("L'anno è bisestile. ");
            b=1;
        }
    }
    if(m1>=1 && m1<=12){
        if(m1==2){
            if(g1>=1 && g1<=28+b){
                printf("La data è accettabile. ");
            }
            else{
                printf("La data non è accettabile. ");
            }
        }
        else{
            if(m1==11 || m1==4 || m1==6 || m1==9){
                if(g1>=1 && g1<=30){
                    printf("La data è accettabile. ");
                }
                else{
                    printf("La data non è accettabile. ");
                }
            }
            else{
                if(g1>=1 && g1<=31){
                    printf("La data è accettabile. ");
                }
                else{
                    printf("La data non è accettabile. ");
                }
            }
        }
    }

    //controllo della seconda data
    if(a2%100==0){
        if(a2%400==0){
            printf("L'anno è bisestile. ");
            b=1;
        }
    }
    else{
        if(a2%4==0){
            printf("L'anno è bisestile. ");
            b=1;
        }
    }
    if(m2>=1 && m2<=12){
        if(m2==2){
            if(g2>=1 && g2<=28+b){
                printf("La data è accettabile. ");
            }
            else{
                printf("La data non è accettabile. ");
            }
        }
        else{
            if(m2==11 || m2==4 || m2==6 || m2==9){
                if(g2>=1 && g2<=30){
                    printf("La data è accettabile. ");
                }
                else{
                    printf("La data non è accettabile. ");
                }
            }
            else{
                if(g2>=1 && g2<=31){
                    printf("La data è accettabile. ");
                }
                else{
                    printf("La data non è accettabile. ");
                }
            }
        }   
    }
    else
        printf("La data non è accettabile. ");
    
    //controlliamo quale data è la più recente
    if(a1>a2)
        printf("La prima data è la più recente.");
    if(a1==a2 && m1>m2)
        printf("La prima data è la più recente.");
    if(a1==a2 && m1==m2 && g1>g2)
        printf("La prima data è la più recente.");

    if(a1<a2)
        printf("La seconda data è la più recente.");
    if(a1==a2 && m1<m2)
        printf("La seconda data è la più recente.");
    if(a1==a2 && m1==m2 && g1<g2)
        printf("La seconda data è la più recente.");


    if(a1==a2 && m1==m2 && g1==g2)
        printf("La prima data e la seconda sono identiche.");

return 0;

}


