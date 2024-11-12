/*Verificare se un numero dato in input è divisibile sia per 3 sia per 5*/
    
#include <stdio.h>

int main()
{
    int numero;
    
    printf("Inserisci un numero: ");
    scanf("%d", &numero);

    if (numero%3==0 && numero%3==0) {
        printf("Il numero %d è divisibile sia per 3 che per 5", numero);
    } else {
        printf("Il numero %d non è divisibile sia per 3 che per 5", numero);
    }

    return 0;
}
