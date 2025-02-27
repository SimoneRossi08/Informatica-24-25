/* Avendo un'equazione ricavare i coefficienti e determinare la parabola. */

#include <stdio.h>
#include <math.h>

float delta(float *d, float *x1, float *x2, int a, int b, int c);
void parabola(float d, float x1, float x2, int a, int b, int c);
        
int main(){

    int a,b,c;
    float d,x1,x2;

    printf("Inserisci il valore di a. \n");
    scanf("%d", &a);
    printf("Inserisci il valore di b. \n");
    scanf("%d", &b);
    printf("Inserisci il valore di c. \n");
    scanf("%d", &c);
    printf("%dx²+(%dx)+(%d)\n", a,b,c);

    delta(&d,&x1,&x2,a,b,c);
    parabola(d,x1,x2,a,b,c);
    
}

float delta(float *d, float *x1, float *x2, int a, int b, int c){

    *d=(b*b)+(-4)*(a)*(c);

    printf("%.2f\n", d);

    *x1=(-b+sqrt(*d))/(2*a);
    *x2=(-b-sqrt(*d))/(2*a);

    printf("%.2f %.2f", x1,x2);

}

void parabola(float d, float x1, float x2, int a, int b, int c){

    if(a>0){
        printf("La parabola è rivolta sopra. \n");
    }
    else{
        printf("La parabola è rivolta sotto. \n");
    }

    if(a>0 && b>0){
        printf("La parabola è posizionata nel secondo quadrante. \n");
    }
    else if(a>0 && b<0){
        printf("La parabola è posizionata nel primo quadrante. \n");
    }
    else if(a<0 && b>0){
        printf("La parabola è posizionata nel terzo quadrante. \n");
    }
    else if(a<0 && b<0){
        printf("La parabola è posizionata nel quarto quadrante. \n");
    }

    if(d>0){
        printf("La parabola tocca con due punti (%.2f, %.2f) l'asse x. \n", x1,x2);
    }
    else if(b==0){
        printf("La parabola tocca con un singolo punto l'asse x. \n");
    }
    else{
        printf("La parabola non tocca l'asse x. \n");
    }

    if(d!=0){
        printf("La parabola tocca l'asse y nel punto %d. \n", c);
    }
    else if(b==0){
        printf("La parabola tocca l'asse y nel punto dell'origine. \n");
    }

}