/*Chiedi all'utente 5 numeri e mostrali in ordine crescente. */

#include <stdio.h>

int main(){

    int n1, n2, n3, n4, n5, t;
    printf("Inserisci il primo valore:");
    scanf("%d", &n1);
    printf("Inserisci il secondo valore:");
    scanf("%d", &n2);
    printf("Inserisci il terzo valore:");
    scanf("%d", &n3);
    printf("Inserisci il quarto valore:");
    scanf("%d", &n4);
    printf("Inserisci il quinto valore: ");
    scanf("%d", &n5);

    if(n2<n1){
        t=n1;
        n1=n2;
        n2=t;
    }
    if(n3<n1){
        t=n1;
        n1=n3;
        n3=t;  
    }
    if(n4<n1){
        t=n1;
        n1=n4;
        n4=t;
    }
    if(n3<n2){
        t=n2;
        n2=n3;
        n3=t;
    }
    if(n4<n2){
        t=n2;
        n2=n4;
        n4=t;
    }
    if(n4<n3){
        t=n3;
        n3=n4;
        n4=t;
    }
    if(n5<n1){
        t=n1;
        n1=n5;
        n5=t;
    }
    if(n5<n2){
        t=n2;
        n2=n5;
        n5=t;
    }
    if(n5<n3){
        t=n3;
        n3=n5;
        n5=t;
    }
    if(n5<n4){
        t=n4;
        n4=n5;
        n5=t;
    }
    printf("i 4 valori in ordine crescente sono: %d %d %d %d %d", n1, n2, n3, n4, n5);

return 0;

}
