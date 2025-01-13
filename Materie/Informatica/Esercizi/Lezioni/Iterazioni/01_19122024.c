/* Dato un numero N calcolare il suo quadrato sommando
            i primi N numeri dispari.
            Esempio: N=7 7^2=49
            1+3+5+7+9+11+13=49 */

#include <stdio.h>

int main(){

    int n,s=1;

    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
    }
    while(n<=0);
    
    while(s<n*n){
        s+=2;
    }
    printf("%d", s);

    return 0;
}