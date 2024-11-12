/*Verificare se A è il quadrato di B*/

#include <stdio.h>

int main(){

    float a,b,q;

    printf("Inserisci il primo valore: ");
    scanf("%f, &a");

    printf("Inserisci il secondo valore: ");
    scanf("%f, &b");

    q=b*b;
    printf("Il quadrato di A è: %f", q);
    if(a==q){
        printf("Il primo valore %f corrisponde al quadrato di %f", a,b);
    }
    else{
        printf("Il primo valore %f non corrisponde al quadrato di %f", a,b);
    }

}  
