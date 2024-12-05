/*Calcolare il quozionete fra due
numeri applicando il metodo delle
    sottrazioni successive*/

/* 23, 3 
   1) 23-3=20
   2) 20-3=17
   3) 17-3=14
   4) 14-3=11
   5) 11-3=8
   6) 8-3=5
   7) 5-3=2 
   
   Quoziente = 7,2 */

#include <stdio.h>

int main(){

    int n1=0,n2=0,n3,temp=0,i=0;

    do{
        printf("Scrivi un numero: ");
        scanf("%d", &n1);
    }
    while(n1<1);

    do{
        printf("Scrivi un altro numero: ");
        scanf("%d", &n2);
    }
    while(n2<1);

    if(n2>n1){
        temp=n1;
        n1=n2;
        n2=temp;
    }
    n3=n1;
    while(n1>n2){
        n1=n1-n2;
        i++;
    }

    printf("Il quoziente di %d e di %d equivale a %d con resto %d. ", n3, n2, i, n1);

    return 0;   
}