    /* stabilire se un numero è dispari
controllando l'ultima cifra meno significativa*/

#include<stdio.h>

int main(){

    int n,c;
        printf("Inserire un numero: ");
        scanf("%d", &n);

        c=n%10;
        if(c%2=0)
            printf("Il numero %d è pari", n);
        else
            printf("Il numero %d è dispari", n);

}