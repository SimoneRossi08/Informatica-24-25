// commento su una riga
/* ESERCIZIO
	Scrivere il doppio di un numero
	fornito da tastiera.*/
#include <stdio.h>

int main(){
	int n, doppio;	//dichiarazione
	
	n=0;	//inizializzazione
	doppio=0;
	
	printf("Inserisci un numero: ");
	scanf("%d", &n);
	doppio=n*2;
	printf("Il doppio vale: %d", doppio);
	
}