/*Scrivi un programma che legge in input il valore di due lati
di un quadrilatero, individua se si tratta di un quadrato o di
    un rettangolo e ne calcola il perimetro e l’area.*/

#include <stdio.h>

int main()
{
    
    float l1,l2,p,a;
    
    printf("Inserisci il valore del primo lato: ");
    scanf("%f", &l1);
    printf("Inserisci il valore del secondo lato: ");
    scanf("%f", &l2);
    
    if(l1==l2){
        printf("La figura composta da i due lati è un quadrato.\n");
    }
    else{
        printf("La figura composta da i due lati è un rettangolo.\n");
    }
    
    p=(l1*2)+(l2*2);
    a=l1*l2;
    
    printf("Il perimetro della figura composta vale %.2f.\n", p);
    printf("L'area della figura composta vale %.2f.\n", a);
    return 0;
}