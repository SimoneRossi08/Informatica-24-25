/* Scrivi un programma che visualizzi la somma dei quadrati dei primi 12 numeri naturali successivi a 8 */

#include <stdio.h>
int main() {

    int n=8,s=0;

    do{
        n++;
        s+=n*n;
    }
    while(n<=20);

    printf("%d ", s);

    return 0;
}