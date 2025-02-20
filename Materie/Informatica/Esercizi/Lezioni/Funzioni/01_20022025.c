/* Si scriva un programma in linguaggio C che letto un numero intero
positivo dello stantard input, visualizzi a terminale il quadrato del
    numero stessi facendo uso soltanto di operazioni di somma.
    - Si osservi che il numero quadrato di ogni
    numero intero positivo N può essere costruito
    sommando tra loro i primi N numeri dispari.
    - Esempio: N=5; P=1+3+5+7+9*/

#include <stdio.h>

int potenza(_n, _p, _s);

int main(){

    int n,p,s=0;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    int potenza();

    printf("%d", s);
}

int potenza(_n, _p, _s){

int i=_p;

    (_p)=(_n)*(_p);
        
    do{
        i--;
        if(i%2!=0){
            _s+=i;
        }
    }
    while(_s=_n);

}