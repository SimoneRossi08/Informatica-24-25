/*Scrivi un programma che legge in input il valore di tre
lati di un triangolo, individua se si tratta di un triangolo
equilatero e ne calcola in tal caso l’area e il perimetro*/

#include <stdio.h>

int main()
{
    
    float l1,l2,l3,p,a,h,t;
    
    printf("Inserisci il valore del primo lato: ");
    scanf("%f", &l1);
    printf("Inserisci il valore del secondo lato: ");
    scanf("%f", &l2);
    printf("Inserisci il valore del terzo lato: ");
    scanf("%f", &l3);
    
    if(l1==l2 && l1==l3){
        printf("Il triangolo composto dai due lati è un triangolo equilatero.\n");
    }
    else{
        printf("Il triangolo composto dai due lati non è un triangolo equilatero.\n");
        
            if(l1>l2 && l1>l3){
            h=(l2*l3)/l1;
            a=(l1*h)/2;
            }
            if(l2>l1 && l2>l3){
            h=(l1*l3)/l2;
            a=(l2*h)/2;
            }
            if(l3>l2 && l3>l1){
            h=(l2*l1)/l3;
            a=(l3*h)/2;
            }
        
        p=l1+l2+l3;
        
    
        printf("Il perimetro del triangolo vale %.2f.\n", p);
        printf("L'area del triangolo vale %.2f.\n", a);
    }
    

    return 0;
}