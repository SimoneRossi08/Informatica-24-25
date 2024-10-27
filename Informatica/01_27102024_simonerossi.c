/*Dato un numero controllare se è divisibile o meno per 3 applicando
la regola della somma delle cifre che compongono il numero. ES:
dato di input: 123 eseguo la somma delle sue cifre -> 1+2+3=6 ->
risultato 6 -> ok 6 è multiplo di 3. NB: qualora il numero fosse a
più cifre vi fermate alla prima somma delle cifre e poi controllate
            se il risultato è divisibile per 3.*/

#include <stdio.h>

int main() {

    int num=0;
    int n1,n2,n3,temp;

    printf("Inserisci un numero: ");
    scanf("%d", &num);

    n1=num%10;
    n2=(num/10)%10;
    n3=(num/100)%10;

    n3=0;
    temp=n1+n2;

    if(temp%3==0){
        printf("Il numero è divisibile per 3.\n");
    }
    else{
        printf("Il numero non è divisibile per 3.\n");
    }

    return 0;
}