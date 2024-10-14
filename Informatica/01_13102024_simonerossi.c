/*DATE DUE DATE ESPRESSE IN g, m, a DETERMINARE LA DATA PIU' RECENTE.
Esempio:  tra la data 5/07/2024 e  14/07/2024  la più recente è il 14/07/2024.*/

#include <stdio.h>
int main()
{

    int g1,m1,a1,g2,m2,a2;

        printf ("Inserisci il giorno della prima data\n");
        scanf ("%d", &g1);
        printf ("Inserisci il mese della prima data\n");
        scanf ("%d", &m1);
        printf ("Inserisci l'anno della prima data\n");
        scanf ("%d", &a1);

        printf ("Inserisci il giorno della data\n");
        scanf ("%d", &g2);
        printf ("Inserisci il mese della seconda data\n");
        scanf ("%d", &m2);
        printf ("Inserisci l'anno della seconda data\n");
        scanf ("%d", &a2);
       
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


