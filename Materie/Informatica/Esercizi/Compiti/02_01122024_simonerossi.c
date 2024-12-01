/* Scrivi un programma che disegna sullo schermo 3 cornici
quadrate concentriche costituite dal carattere “*”
    rispettivamente di lato 12, 8, e 4. */

#include <stdio.h>

int main(){

    //1
    for(int i=1; i<=12; i++ ){
        printf("*\t");
    }
    for(int i=1; i<=10; i++ ){
        for(int i=1; i<=1; i++ ){
            printf("*\t");
        }
        for(int i=1; i<=10; i++ ){
            printf(" \t");
        }
        for(int i=1; i<=1; i++ ){
            printf("*\t\n");
        }
    }
    for(int i=1; i<=12; i++ ){
        printf("*\t");
    }

    //2
    for(int i=1; i<=8; i++ ){
        printf("*\t");
    }
    for(int i=1; i<=6; i++ ){
        for(int i=1; i<=1; i++ ){
            printf("*\t");
        }
        for(int i=1; i<=6; i++ ){
            printf(" \t");
        }
        for(int i=1; i<=1; i++ ){
            printf("*\t\n");
        }
    }
    for(int i=1; i<=8; i++ ){
        printf("*\t");
    }
    
    //3
    for(int i=1; i<=4; i++ ){
        printf("*\t");
    }
    for(int i=1; i<=2; i++ ){
        for(int i=1; i<=1; i++ ){
            printf("*\t");
        }
        for(int i=1; i<=2; i++ ){
            printf(" \t");
        }
        for(int i=1; i<=1; i++ ){
            printf("*\t\n");
        }
    }
    for(int i=1; i<=4; i++ ){
        printf("*\t");
    }

    return 0;
}