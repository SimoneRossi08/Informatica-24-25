/*Il programma letti tre numeri, determini se possono essere
considerati in progressione aritmetica; una progressione
aritmetica è una serie di numeri in cui la differenza tra
            due numeri successivi è costante*/

#include <stdio.h>

int main(){

int n1,n2,n3;

    printf("Inserisci tre numeri: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if((n3-n2)==(n2-n1)){
        printf("Sono in progressione aritmetica");
    }
    else{
        printf("Non sono in progressione aritmetica");
   }
}