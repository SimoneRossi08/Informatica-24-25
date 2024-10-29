/*Scrivi un programma in C che faccia inserire dei numeri interi all'utente:
il programma si deve fermare quando la somma dei numeri inseriti raggiunge 
100 oppure quando sono stati inseriti 5 numeri. Alla fine mostrare il numero
            di valori inseriti dall'utente (usare contatore).*/

#include <stdio.h>
int main (){

    int num=0;
    int somma=0;
    int superato=0;
    int contatore=0;

    printf("Inserisci un numero: "); // Tentativo 1
    scanf("%d", &num);
    contatore++;
    somma=num;

    if(somma>100){
        printf("Hai superato la soglia massima. ");
        superato=1;
    }
    if(superato==0){
        printf("Inserisci un altro numero: ");//Tentativo 2
        scanf("%d", &num);
        somma+=num;
        contatore++;
        if(somma>100){
        printf("Hai superato la soglia massima. ");
        superato=1;
        }
    }
    
    if(superato==0){
        printf("Inserisci un altro numero: ");//Tentativo 3
        scanf("%d", &num);
        somma+=num;
        contatore++;
        if(somma>100){
        printf("Hai superato la soglia massima. ");
        superato=1;
        }
    }
    
    if(superato==0){
        printf("Inserisci un altro numero: ");//Tentativo 4
        scanf("%d", &num);
        somma+=num;
        contatore++;
        if(somma>100){
        printf("Hai superato la soglia massima. ");
        superato=1;
        }
    }

    if(superato==0){
        printf("Inserisci un altro numero: ");//Tentativo 5
        scanf("%d", &num);
        somma+=num;
        contatore++;
        if(somma>100){
        printf("Hai superato la soglia massima. ");
        superato=1;
        }
    }
    
    if(superato==1){
        printf("Hai superato la soglia con %d tentativi. ", contatore);
    }
    if(contatore==5){
        printf("Hai usato tutti i 5 tentativi. ");
    }
}