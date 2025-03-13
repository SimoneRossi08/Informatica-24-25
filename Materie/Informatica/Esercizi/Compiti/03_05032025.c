/* Calcolare il fattoriale di un numero. */

#include <stdio.h>

int fattoriale(int n);

int main(){
    
    int n,f;
    
    printf("Inserisci un numero: ");
    scanf("%d",&n);
    
    f=fattoriale(n);
    
    printf("%d", f);

    return 0;
}
int fattoriale(int n){
    
    int i=n;
    
    do{
        i--;
        n*=i;
    }
    while(i!=1);
    
    return n;
}