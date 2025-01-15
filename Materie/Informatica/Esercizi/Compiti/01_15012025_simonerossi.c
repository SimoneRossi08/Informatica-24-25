/* Data una serie di N numeri (con N scelto dall'utente maggiore di 3)
determinare il valore più grande e quello immediatamente inferiore (il secondo) */

#include <stdio.h>
int main(){

    int s,n,nm1=0,nm2,t,c=0;

    do{
        printf("Inserisci una quantità di serie di numeri: ");
        scanf("%d", &s);
    }
    while(s<=3);

    do{
        printf("Inserisci un numero: ");
        scanf("%d", &n);
        if(c<=1){
        nm2=n;
        }
        if(nm2<n){
        nm2=n;
        }
        if(nm1<nm2){
        t=nm2;
        nm2=nm1;
        nm1=t;
        }
        c++;
    }
    while(c!=s);
    printf("Il valore più grande è %d e il secondo maggiore è %d. ", nm1, nm2);

    return 0;
}