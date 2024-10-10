/*Scrivi un programma che permetta all’utente di inserire 5 numeri interi
e verifichi se questi numeri appartengono alla sequenza dei numeri naturali,
cioè sono tutti differenti e hanno tra di loro distanza unitaria nella linea
dei numeri. (ad esempio la sequenza 3-4-5-6-7 è una sequenza adeguata,
            3-4-5-7-8 non è una sequenza adeguata)*/

#include <stdio.h>

int main(){

    int n1,n2,n3,n4,n5,t,min,max;

    min=n1;
    max=n1;

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


    min=n1;max=n1;
    if(n2>max)max=n2;
    if(n3>max)max=n3;
    if(n4>max)max=n4;
    if(n5>max)max=n5;
    if(n2<min)min=n2;
    if(n3<min)min=n3;
    if(n4<min)min=n4;
    if(n5<min)min=n5;
    if(n1==n2||n1==n3||n1==n4||n1==n5||n2==n3||n2==n4||n2==n5||n3==n4||n3==n5||n4==n5){
        printf("I numeri devono essere differenti.\n");
        return 0;
    }
    if(max-min==4){
        printf("I numeri formano una sequenza adeguata: %d %d %d %d %d\n",min,min+1,min+2,min+3,min+4);
    }else{
        printf("I numeri non hanno tra di loro distanza unitaria.\n");
    }
    return 0;
}
