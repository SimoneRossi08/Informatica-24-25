/* Dato un numero stampare tutto i suoi divisori */

#include <stdio.h>

int main(){

    int n,d=1;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    while(d<=n){
        if(n%d==0){
            printf("%d ", d);
        }
        d++;
    }
    return 0;
}