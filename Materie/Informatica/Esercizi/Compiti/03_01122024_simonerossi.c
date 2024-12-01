/* Scrivi un programma che visualizzi i primi 100 numeri dispari a gruppi di 5. */

#include <stdio.h>

int main(){

    int n=1,c=0;

    for(int i=0; i<=100; i++){
        printf("%d ", n);
        c++;
            if(c==5){
                printf("\t", n);
                c=0;
            }
        n+=2;
    }
}