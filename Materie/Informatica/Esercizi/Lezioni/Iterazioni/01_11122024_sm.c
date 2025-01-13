/*Chiesti all'utente N numeri (con N scelto dall'utente e strettamente positivo) stampare la somma di quelli pari e di quelli dispari. Calcolare e mostrare anche la media di quelli pari e di quelli dispari.*/

#include <stdio.h>
int main() {
    int n=0;
    int val=0;
    int sump=0;
    int sumd=0;
    int cntp=0;
    int cntd=0;
    float mediap=0;
    float mediad=0;

    do{
        printf("inserisci un valore: ");
        scanf("%d", &n);
    }while(n<=0);

    for(int i=0; i<n; i++){
        printf("inserisci un valore: ");
        scanf("%d", &val);
        if(val%2==0){
            sump=sump+val;
            cntp++;
        }else{
            sumd=sumd+val;
            cntd++;
        }
    }
    mediap=(float)sump/cntp;
    mediad=(float)sumd/cntd;
    printf("la somma dei numeri pari è %d\n", sump);
    printf("la somma dei numeri dispari è %d\n", sumd);
    printf("la media dei numeri pari vale %f\n", mediap);
    printf("la media dei numeri dispari vale %f\n", mediad);
    return 0;
} 