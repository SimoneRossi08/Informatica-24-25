/* Riempire un vettore con una sequenza ordinata */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "array.h"
#include "array.c"
#define DIM 10

int main(){

    int n,pos,vett[DIM];

    riempivettoreordinatocasuale(vett, DIM, 0, 10);
    stampavettore(vett, DIM, '-');
}