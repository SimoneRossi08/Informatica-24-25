/*dato un numero di cifre
stampare le cifre che 
compongono il numero*/

 #include<stdio.h>

 int main(){

    int n,q,r1,r2;
        printf("Inserisci un numero composto da 3 cifre o meno: ");
        scanf("%d", &n);
        if(n>999){
            printf("Il numero è troppo grande, inserisci un numero composto da 3 cifre o meno ");
        }
        else
            r1=n/100;
            r2=(n/10)%10;
            q=n%10;
            printf("%d %d %d", r1, r2, q);
}