/* Considerate la seguente regola: dato un numero intero positivo n, se n è pari lo si divide per 2, se è dispari lo si
moltiplica per 3 e si aggiunge 1 al risultato. Quando n è 1 ci si ferma. 
Questa semplice regola permette di costruire delle sequenze: la sequenza che si costruisce a partire dal numero
n è detta sequenza di Collatz di n. 
Ad esempio, la sequenza di Collatz di  7  è:  7   22   11   34   17   52   26   13   40   20   10   5   16   8  4  2  1 
Lunghezza=17
E’ un noto problema aperto stabilire se ogni sequenza di Collatz termina (cioè, se arriva a 1).  
Scrivere una funzione che, dato un numero, (passando il numero per indirizzo) calcoli ogni volta il nuovo valore di n, determinando così la sequenza di Collatz del numero n e la sua lunghezza.
N.B.: nel testare il programma inserite ad esempio una volta n=7 e poi n=9 */

#include <stdio.h>

void sequenzaCollatz(int *_n);

int main(){
	
	int n, l=0;
	
	do{
		printf("Inserisci un valore: ");
		scanf("%d", &n);
	}
	while(n<=0);
	
	printf("La sequenza di %d e\': ", n);
	
	while(n!=1){
		sequenzaCollatz(&n); // Calcola il nuovo valore della sequenza
		printf("\n%d", n);
		l++;
	}
	
	return 0;
}

void sequenzaCollatz(int *_n){
	
	if((*_n)%2==1){
		(*_n)=(*_n)*3+1;
	}
	else{
		(*_n)=(*_n)/2;
	}
}