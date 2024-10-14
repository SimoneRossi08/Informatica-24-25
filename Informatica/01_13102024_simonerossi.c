/*DATE DUE DATE ESPRESSE IN g, m, a DETERMINARE LA DATA PIU' RECENTE.
Esempio:  tra la data 5/07/2024 e  14/07/2024  la più recente è il 14/07/2024.*/

#include <stdio.h>
int main()
{

    int g1,m1,a1,g2,m2,a2;

        printf ("Inserisci il giorno, il mese e l'anno della prima data\n");
        scanf ("%d %d %d", &g1, &m1, &a1);

        printf ("Inserisci il giorno, il mese, l' anno della seconda data\n");
        scanf ("%d %d %d", &g2, &m2, &a2);


        if(m1>12 || g1>31 || m2>12 || g2>31)
                printf("I gli orari non sono accettabili");

        if(a1>a2)
                printf("La prima data è la più recente\n");
        if(a1==a2 && m1>m2)
                printf("La prima data è la più recente\n");
        if(a1==a2 && m1==m2 && g1>g2)
                printf("La prima data è la più recente\n");

        if(a1<a2)
            printf("La seconda data è la più recente\n");
        if(a1==a2 && m1<m2)
                printf("La seconda data è la più recente\n");
        if(a1==a2 && m1==m2 && g1<g2)
                printf("La seconda data è la più recente\n");


        if(a1==a2 && m1==m2 && g1==g2)
                printf("La prima data e la seconda sono identiche\n");

return 0;

}


