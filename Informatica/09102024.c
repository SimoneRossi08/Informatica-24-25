/*Scrivi un programma che permetta all’utente di inserire 5 numeri interi
e verifichi se questi numeri appartengono alla sequenza dei numeri naturali,
cioè sono tutti differenti e hanno tra di loro distanza unitaria nella linea
dei numeri. (ad esempio la sequenza 3-4-5-6-7 è una sequenza adeguata,
            3-4-5-7-8 non è una sequenza adeguata)*/

#include <stdio.h>

int main(){

    int n1,n2,n3,n4,n5,t;

    printf("Scrivi 5 numeri: ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    
    if(n1==n2 || n1==n3 || n1==n4 || n1==n5 || n2==n3 || n2==n4 || n2==n5 || n3=n4 || n3==n5 || n4==n5){
        printf("I numeri sono uguali, devono essere differenti.");
    }
    else if(n1>n2 && n2>n2 && n3>n4 && n4>n5){
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
    printf("i 4 valori in ordine crescente sono: %d-%d-%d-%d-%d", n1, n2, n3, n4, n5);

    }
    else{
        printf("I numeri non hanno tra di loro distanza unitaria. I numeri devono avere una distanza unitaria.");
    }



}