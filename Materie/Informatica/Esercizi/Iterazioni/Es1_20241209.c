/* Progettate un algoritmo che legga un numero B<A
    e scriva quante volte A è divisibile per B. 
ES: A=162 B=3 A è divisibile 4 volte per B. */

#include <stdio.h>

int main(){

    int a,b,cnt=0,temp=0,q,r;

    do{
    printf("Inserisci un numero: ");
    scanf("%d", &a);
    printf("Inserisci un numero: ");
    scanf("%d", &b);
    }
    while(a<b);

    q=a;
    while(q>b || r!=0){
        q=a/b;
        if(q%b==0){
            r=q%b;
            cnt++;
            q=q/b;
        }
    }
   printf("Il numero %d è divisiblie %d volte per il numero %d. ", a, cnt, b);

}