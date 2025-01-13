/* DATI 5 VALORI STAMPARLI */

    /* int n1,n2,n3; //5 variabili

    printf("Inseririe un numero: ");
    scanf("%d", &n1);
    printf("Il valore eseguito è: %d", n1);

    printf("Inseririe un numero: ");
    scanf("%d", &n2);
    printf("Il valore eseguito è: %d", n2);

    printf("Inseririe un numero: ");
    scanf("%d", &n3);
    printf("Il valore eseguito è: %d", n3); */

    /* int n;
    int cnt=0; //variabile contatore inizializzata a 0

    printf("Inseririe un numero: ");
    scanf("%d", &n);
    printf("Il valore eseguito è: %d\n", n);
    cnt++;

    printf("Inseririe un numero: ");
    scanf("%d", &n);
    printf("Il valore eseguito è: %d\n", n);
    cnt++;

    printf("Inseririe un numero: ");
    scanf("%d", &n);
    printf("Il valore eseguito è: %d\n", n);
    cnt++;

    printf("Inseririe un numero: ");
    scanf("%d", &n);
    printf("Il valore eseguito è: %d\n", n);
    cnt++; */

 #include <stdio.h>

int main(){

    int n;
    int cnt=0; //variabile contatore inizializzata a 0

    while(cnt<5){
        printf("Inseririe un altro numero: ");
        scanf("%d", &n);
        printf("Il valore eseguito è: %d\n", n);
        cnt++;
    }

    return 0;
}