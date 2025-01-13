/* Stampa i primi N numeri dispari successivi al numero A */

#include <stdio.h>

int main(){

    int n,a;

        do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
        printf("Inserisci un numero: ");
        scanf("%d", &a);
        }
        while(n<0);

    for(int i=0; i<=n; i++){
        
        if(a%2==0){
            a++;
        }
        if(a%2!=0){
            a+=2;
        }
        printf("%d ", a);
    }
    
    return 0;
}