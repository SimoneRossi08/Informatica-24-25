/* Scrivi un programma in C che riempia un vettore di 10 elementi con numeri
casuali compresi tra 0 e 100. Quindi fai in modo che il programma possa mostrare
i due valori maggiori presenti nel vettore. Suddividi il programma in funzioni
        (riempiVettore(), stampaVettore(), stampaDueMax()). */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void riempiVettore(int v[], int d);
void stampaVettore(int v[], int d);
void stampaDueMax(int v[], int d);

int main(){
        
        int v[10];
        srand(time(NULL)); 
        
        riempiVettore(v, 10);
        stampaVettore(v, 10);
        stampaDueMax(v, 10);
        
        return 0;
}

void riempiVettore(int v[], int d){
        for(int i=0; i<d; i++){
                v[i]=rand()%101;
        }
}
            
void stampaVettore(int v[], int d){
    
        for(int i=0; i<d; i++){
                printf("%d\n", v[i]);
        }
}
            
void stampaDueMax(int v[], int d){
    
        int m1=v[0],m2=v[0];
            
        for(int i=0; i<=d; i++){
                if(v[i]>m1){
                        m2=m1;
                        m1=v[i];
                }
                else if(v[i]>m2){
                        m2=v[i];
                }
        }
            
        printf("I due valori maggiori nel vettore sono: %d e %d\n", m1, m2);
}