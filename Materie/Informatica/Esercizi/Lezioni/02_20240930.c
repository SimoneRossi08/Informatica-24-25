/*STABILIRE SE DATI DUE NUMERI A e B CONTROLLARE SE A è MINORE, UGUALE o MAGGIORE DI B*/

#include <stdio.h>
int main(){

    int a;
    int b;

    printf("Inserisci il primo valore: ");
    scanf("%d, &a");

    printf("Inserisci il secondo valore: ");
    scanf("%d, &b");

    if(a==b){
        printf("I due valori sono uguali");
    }
    else{
        if(a>b)
            printf("A, %d è maggiore di B, %d", a,b);
        else
            printf("A, %d è minore di B, %d", a,b);
    }
    return 0;

}
