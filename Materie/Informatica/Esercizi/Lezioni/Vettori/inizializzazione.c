/* Introduzione agli Array */

#include <stdio.h>
#define max 10

int main(){

    int v[max]; //int v[10];

    for(int i=0; i<10; i++){
        v[i]=1;
        printf("%d\t", v[i]);
    }

    return 0;
}