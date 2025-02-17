/* Esercizio: Considerate la seguente regola: dato un numero intero positivo n, se n è pari lo si divide per 2, se è dispari lo si
moltiplica per 3 e si aggiunge 1 al risultato. Quando n è 1 ci si ferma. 
Questa semplice regola permette di costruire delle sequenze: la sequenza che si costruisce a partire dal numero
n è detta sequenza di Collatz di n. 
Ad esempio, la sequenza di Collatz di  7  è:  7   22   11   34   17   52   26   13   40   20   10   5   16   8  4  2  1 
Lunghezza=17
E’ un noto problema aperto stabilire se ogni sequenza di Collatz termina (cioè, se arriva a 1).  
Scrivere una funzione che, dato un numero, (passando il numero per indirizzo) calcoli ogni volta il nuovo valore di n, determinando così la sequenza di Collatz del numero n e la sua lunghezza.
N.B.: nel testare il programma inserite ad esempio una volta n=7 e poi n=9. */

# include <stdio.h>

void collatz(int *_n2, int *_s);

int main(){

        int n1=0;
        int s=1;
            printf("Inserisci un numero: ");
            scanf("%d", &n1);
            
            printf("La sequenza di Collatz di %d è composta da %d", n1, s);
            collatz(&n1, &s);
           
            return 0;
}
void collatz(int *_n2, int *_s){

    while(*_n2!=1){

        printf("\n%d", *_n2);

        if(*_n2%2==0){
            *_n2/=2;
        }
        else{
            *_n2=*_n2*3+1;
        }
        *_s++;
          
    }
        printf("\n1");
        *_s++;
}