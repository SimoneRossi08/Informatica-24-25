/* Scrivi un programma in C che disegni usando degli asterischi * un
        triangolo rettangolo di lato 8 e poi un triangolo
                isoscele di base 9 e altezza 9. */

#include <stdio.h>

int main() {

    for(int i=0; i<8; i++){
        for(int j=0; j<i; j++){
            if(j==1 || j==i || i==8){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0; i<9; i++){
        for(int j=0; j<9-i; j++){
            printf(" ");
        }
        printf("*");
        if(i>1){
            for(int j=0; j<2*(i-1)-1; j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    for (int i=0; i<9; i++) {
        printf("* ");
    }
    printf("\n");

    return 0;
}