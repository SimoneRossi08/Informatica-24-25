    /* Dati n numeri, sommarli 4 a 4 
termina non appena si introduce uno 0 

    Es: -29, 5,-3, 26 somma=-1
        124, -2, 16, 3 somma=141 */

#include <stdio.h>

int main(){

    int n,s,cnt=0;

    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
        cnt++;
        n+=n;
        n+=n;
        if(cnt%4==0){
            s=n;
            printf("La somma equivale a: %d\n", s);
        }
    }
    while(n!=0);

    return 0;
}