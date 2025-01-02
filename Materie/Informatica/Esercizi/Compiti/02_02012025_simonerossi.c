/* Scrivi un programma per la rappresentazione del rettangolo “a spirale”, che
contiene numeri naturali, definito riempiendo le righe del rettangolo con numeri
consecutivi e partendo da 1 nell’angolo in alto a sinistra.
Si consideri ad esempio il caso N=5. Il rettangolo è il seguente:

1  2  3  4  5  
10 9  8  7  6  
11 12 13 14 15  
20 19 18 17 16  
21 22 23 24 25  

Il programma riceve da tastiera un numero intero N e
visualizza le prime N righe del rettangolo.  */

#include <stdio.h>

int main(){
    
    int n1,n2=0;

    do{
    printf("Inserisci un numero: ");
    scanf("%d", &n1);
    }
    while(n1<0);

    for(int i=0; i<n1; i++){
        for(int j=0; j<n1; j++){
            printf("%d ", n2+=1);
        }
        printf("\n");
    }

    return 0;
}