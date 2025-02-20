/* Dato un valore stampare i suoi fattori
    Es: 28 = 2*2*7 2, 2, 7
        36 = 2*13
        
        28/2
        14/2
        7       */

#include <stdio.h>

void fattori(_n);

int main(){

    int n,f;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    fattori(n);
}

void fattori(_n){

    int q;
    q=_n;

    for(int i=2; i<=q; i++){
        do{
            q/=i;
            if(q%i==0){
                printf("%d\n", i);
            }
        }
        while(q%i!=0);
    }
}
