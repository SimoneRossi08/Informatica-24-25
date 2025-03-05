/* Dato un valore stampare i suoi fattori
    Es: 28 = 2*2*7 2, 2, 7
        36 = 2*13
        
        28/2
        14/2
        7                               */

#include <stdio.h>

int fattore(int n);

int main(){
    
    int n;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    fattore(n);
}

int fattore(int n){
c
    for(int i=2; i<=n; i++){
        while(n%i==0){
        n=n/i;
        printf("%d\n",i);
        }
    }
}
