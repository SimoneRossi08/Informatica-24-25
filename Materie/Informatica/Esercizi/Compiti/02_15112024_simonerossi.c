    /*Leggere una sequenza di numeri. Terminare la
lettura quando si incontra un numero pari, comunicare
    quanti valori uguali a 0 si sono presentati. */

#include <stdio.h>

int main(){

	int n=0;
	int cnt=0;
	
	do{
		printf("Inserisci un numero: ");
		scanf("%d",&n);
		if(n==0)
			cnt++;
	}while(n%2==1 || n==0); 
	    printf("Il numero di 0 inseriti equivale a %d",cnt);
	
}