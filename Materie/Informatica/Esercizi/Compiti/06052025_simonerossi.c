/* Dato un array ordinato inserire un nuovo elemento all'interno dell'array. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int d=9;
    int v[10]={3,6,7,11,14,16,20,21,25};
    int n=0;

    printf("Array: ");
    for(int i=0; i<d; i++){
        printf("%d ", v[i]);
    }

    printf("\nInserisci un nuovo valore: ");
    scanf("%d", &n);

    d++;

    int i=d-2;
    while(i>=0 && v[i]>n){
        v[i+1]=v[i];
        i--; 
    }
    v[i + 1]=n;

    printf("Array: ");
    for(int i=0; i<d; i++){
        printf("%d ", v[i]);
    }
}