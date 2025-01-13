/* Calcolare la somma dei primi N numeri naturali
es 5 1+2+3+4+5 */

#include <stdio.h>

int main(){

    int n,s=0;

    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
    }
    while(n<0);

    for(int i=0; i<=n; i++){
        s=s+i;   
    }
    
    printf("La somma equivale a %d", s);

    return 0;
}