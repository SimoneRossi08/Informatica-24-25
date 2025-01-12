/* scrivi un programma che visualizza sullo schermo il triangolo di Tartaglia
utilizzando due cicli a conteggio innestati spaziando opportunamente le cifre */

#include <stdio.h>
int main() {

    int n1=6, n2;

    for(int i=0; i<n1; i++){
        for(int j=0; j<n1-i-1; j++){
            printf(" ");
        }

        n2=1;
        for(int j=0; j<=i; j++){
            printf("%d ", n2);
            n2=n2*(i-j)/(j+1);
        }
        printf("\n");
    }

    return 0;
}