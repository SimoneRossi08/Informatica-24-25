/* Leggere una sequenza di numeri interi. Terminare la letture
quando si incontra un valore pari a zero. Determinare quanti sono
        stati i valori pari e i valori dispari. */
	
#include <stdio.h>

int main(){

	int n=0;
	int cntd=0;
	int cntp=0;
	
	do{
		printf("Inserisci un numero: ");
		scanf("%d", &n);

		if(n%2==0 && n!=0)
			cntp++;
		else
			cntd++;
	}while(n!=0);

	printf("Il numero di valori pari inserito è %d ", cntp);
	printf("Il numero di valori dispari inserito è %d ", cntd);
	
	return 0;
}