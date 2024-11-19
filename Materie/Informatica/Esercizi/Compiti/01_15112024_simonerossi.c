/* Leggere una sequenza di numeri. Terminare
la lettura quando si incontra un numero dispari
    e stampare quanti numeri sono stati letti. */

#include <stdio.h>

int main(){

	int n;
	int cnt=0;
		
	do{	
		printf("Inserisci un numero: ");
		scanf("%d", &n);	
		cnt++;	
	}while(n%2==0);
	    printf("Sono stati inseriti %d valori. ", cnt);
        
}