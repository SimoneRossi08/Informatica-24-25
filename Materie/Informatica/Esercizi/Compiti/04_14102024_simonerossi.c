/*Scrivere un programma che legge 2 orari in ore minuti e secondi
e dice quale viene prima dei due. (Si risolva l’esercizio senza
                trasformare tutto in secondi).*/

#include<stdio.h>

int main()
{

    int h1,h2,m1,m2,s1,s2;


    printf("Scrivi il primo orario: ");
    scanf("%d %d %d", &h1, &m1, &s1);


    printf("Scrivi il secondo orario: ");
    scanf("%d %d %d", &h2, &m2, &s2);


    if(h1>23 || m1>59 || s1>59 || h2>23 || m2>59 || s2>59)
        printf("I gli orari non sono accettabili");

    else if(h1>h2)
        printf("Il secondo orario, cioè %d:%d:%d, viene prima.", h2,m2,s2);
    else if(h2>h1)
        printf("Il primo orario, cioè %d:%d:%d, viene prima.", h1,m1,s1);
    else if(h1==h2 && m1>m2)
        printf("Il secondo orario, cioè %d:%d:%d, viene prima.", h2,m2,s2);
    else if(h1==h2 && m2>m1)
        printf("Il primo orario, cioè %d:%d:%d, viene prima.", h1,m1,s1);
    else if(h1==h2 && m1==m2 && s1>s2)
        printf("Il secondo orario, cioè %d:%d:%d, viene prima.", h2,m2,s2);
    else if(h1==h2 && m1==m2 && s2>s1)
        printf("Il secondo orario, cioè %d:%d:%d, viene prima.", h2,m2,s2);
        
return 0;
}