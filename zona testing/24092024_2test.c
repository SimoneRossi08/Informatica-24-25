/* ESERCIZIO
	Calcola l'area di un triangolo
	inserendo la base e l'altezza*/
#include <stdio.h>

int main(){
	
	float base, altezza, area;

	printf("Inserisci un valore della base: ");
	scanf("%f", &base);
	
	printf("Inserisci un valore dell'altezza: ");
	scanf("%f", &altezza);
	
	area=(base*altezza)/2;
	printf("L'area del triangolo vale: %.2f", &area);
	
}