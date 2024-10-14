/* Scrivere un programma che letto due orari in
ore, minuti e secondi restituisce quale orario
                viene prima. */

#include<stdio.h>

int main(){

    int h1,h2,m1,m2,s1,s2; //dichiarazioni delle variabili

    //assegnazione del primo orario
    printf("Scrivi il primo orario: ");
    scanf("%d %d %d", &h1, &m1, &s1);

    //assegnazione del secondo orario
    printf("Scrivi il secondo orario: ");
    scanf("%d %d %d", &h2, &m2, &s2);

    if(h1>23 || m1>59 || s1>59 || h2>23 || m2>59 || s2>59)
        printf("I gli orari non sono accettabili");
    else if(h1>h2)
        printf("Il secondo orario, cioè %d:%d:%d, viene prima", h2,m2,s2);
    else if(h2>h1)
        printf("Il primo orario, cioè %d:%d:%d, viene prima", h1,m1,s1);
    else if(h1==h2 && m1>m2)
        printf("Il secondo orario, cioè %d:%d:%d, viene prima", h2,m2,s2);
    else if(h1==h2 && m2>m1)
        printf("Il primo orario, cioè %d:%d:%d, viene prima", h1,m1,s1);
    else if(h1==h2 && m1==m2 && s1>s2)
        printf("Il secondo orario, cioè %d:%d:%d, viene prima", h2,m2,s2);
    else if(h1==h2 && m1==m2 && s2>s1)
        printf("Il secondo orario, cioè %d:%d:%d, viene prima", h2,m2,s2);
        
  
}