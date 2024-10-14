/*Il programma legge tre numeri e dice se possono essere
le lunghezze dei lati di un triangolo (perché un triangolo
possa essere tale la somma di ogni coppia lati deve essere
                maggiore dell’altro)*/

#include<stdio.h>

int main(){

int l1,l2,l3;

    printf("Inserisci tre lunghzze dei lati di un triangolo: ");
    scanf("%d %d %d", &l1, &l2, &l3);

    if(l1+l2>l3 && l2+l3>l1 && l1+l3>l2)
        printf("Possono essere le lunghzze dei lati di un triangolo. ");
    else   
        printf("Non possono essere le lunghzze dei lati di un triangolo. ");

}
