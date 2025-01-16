/* Dato numero a più cifre comunicare quale e quante cifre corrispondono alla propria posizione
Esempio: n1=4211 la cifra 1 corrisponde alla prima posizione e la cifra 4
corrisponde alla quarta posizione. */

#include <stdio.h>
int main(){

    int n,n1,n2,n3,n4,n5;

    do{
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    }
    while(n<9);

    if(n>9){
        n1=n%10;
        n2=n/10;
    }
    if(n>99){
        n1=n%10;
        n2=n/10;
        n3=n/100;
    }
    if(n>999){
        n1=n%10;
        n2=n/10;
        n3=n/100;
        n4=n/1000;
    }
    if(n>9999){
        n1=n%10;
        n2=n/10;
        n3=n/100;
        n4=n/1000;
        n5=n/10000;
    }


    if(n1=1){
        printf("La cifra %d corrisponde alla prima posizione.\n", n1);
    }
    if(n2=2){
        printf("La cifra %d corrisponde alla seconda posizione.\n", n2);
    }
    if(n3=3){
        printf("La cifra %d corrisponde alla terza posizione.\n", n3);
    }
    if(n4=4){
        printf("La cifra %d corrisponde alla quarta posizione.\n", n4);
    }
    if(n5=5){
        printf("La cifra %d corrisponde alla quarta posizione.\n", n5);
    }

}