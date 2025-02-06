/* Dato il raggio calcolare la circonferenza e l'area del cerchio. 
        Eseguire i passaggi dei parametri per indirizzo. 
        pi=3.14 c=2*pi*r a=pi*r^2 */

#include <stdio.h>

float circonferenza(float *_c, float _r, float _pi);
float area(float *_a, float _r, float _pi);

int main(){

    float r,c,a,pi=3.14;

    printf("Inserisci il valore del raggio: ");
    scanf("%f", &r);

    circonferenza(&c, r, pi);
    printf("La circonferenza vale %.2f. \m", c);

    area(&a, r, pi);
    printf("L'area vale %.2f. \n", a);
}

float circonferenza(float *_c, float _r, float _pi){

    *_c=2*(_r)*(_pi);
}

float area(float *_a, float _r, float _pi){

    *_a=(_pi)*(_r)*(_r);
}