/* Sviluppare un programma in c che stampi il Triangolo di Floyd
    n=5

    1
    2  3
    4  5  6
    7  8  9  10
    11 12 13 14 15
    */

#include <stdio.h>

void floyd(int n);

int main(){

    int n;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    floyd(n);

}

void floyd(int n){

    int a=1;
    
    for(int i=0; i<n; i++){
        for(int l=0; l<n; l++){
            if(l<=i){
                printf("%d\t", a++);
            }
            else{
                printf("\n");
            }
        }
    }
}