/*Dati 3 numeri stampare il più piccolo, il più grande e la loro media aritmetica.*/
    
#include <stdio.h>

int main()
{
    int numero1,numero2,numero3;
    float media;
    
    printf("Inserisci il primo numero: ");
    scanf("%d", &numero1);
    
    printf("Inserisci il secondo numero: ");
    scanf("%d", &numero2);
    
    printf("Inserisci il terzo numero: ");
    scanf("%d", &numero3);

    if(numero1<numero2 && numero1<numero3){
        printf("Il numero %d è più piccolo di %d e %d\n", numero1,numero2,numero3);
    }
    else{
        if(numero2<numero1 && numero2<numero3)
            printf("Il numero %d è più piccolo di %d e %d\n", numero2,numero1,numero3);
        else{
            if(numero3<numero1 && numero3<numero2)
                printf("Il numero %d è più piccolo di %d e %d\n", numero3,numero1,numero2);
    }}
    
    if(numero1>numero2 && numero1>numero3){
        printf("Il numero %d è più grande di %d e %d\n", numero1,numero2,numero3);
    }
    else{
        if(numero2>numero1 && numero2>numero3)
            printf("Il numero %d è più grande di %d e %d\n", numero2,numero1,numero3);
        else{
            if(numero3>numero1 && numero3>numero2)
                printf("Il numero %d è più grande di %d e %d\n", numero3,numero1,numero2);
    }}
    
    media=(numero1+numero2+numero3)/3;
    printf("La media aritmetica di %d, %d e %d equivale a %.2f\n", numero1,numero2,numero3,media);
    
    return 0;
}