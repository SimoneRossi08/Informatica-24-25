/* Scrivere un programma che letto due orari in
ore, minuti e secondi restituisce quale orario
                viene prima. */

#include<stdio.h>

int main(){

    int h1,h2,m1,m2,s1,s2;

    printf("Scrivi il primo orario: ");
    scanf("%d %d %d", &h1, &m1, &s1);

    printf("Scrivi il secondo orario: ");
    scanf("%d %d %d", &h2, &m2, &s2);

    if(h1>h2)
        printf("Il primo orario viene dopo");
    else if(h2>h1)
        printf("Il secondo orario viene dopo");
    else if(h1==h2 && m1>m2)
        printf("Il primo orario viene dopo")
}