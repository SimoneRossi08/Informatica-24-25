    /* Sviluppa un programma che eroga il resto per un distributore di bevande automatico.
    Il cliente sceglie un prodotto (numero intero da 1 a 5) e gli viene visualizzato il costo:
quindi inizia a inserire monete nell’apposita fessura, che possono essere da 1, 5, 10, 20 e 50 centesimi.
Non appena l’importo richiesto viene raggiunto o superato, il programma interrompe l’acquisizione della
sequenza e restituisce una serie di numeri interi corrispondenti al resto in monete da 1 e 5 centesimi. */

#include <stdio.h>

int main(){
    int p,c,r,m,t=0,r5,r1;

    do{
    printf("Scegli un prodotto: ");
    scanf("%d", &p);
    }
    while(p<0 || p>6);
    
    switch (p)
    {
    case 1:
        c=10;
        break;
    case 2:
        c=15;
        break;
    case 3:
        c=30;
        break;
    case 4:
        c=30;
        break;
    case 5:
        c=45;
        break;
    default:
        break;
    }

    printf("Costo: %d\n", c);
    
    
    do{
    printf("Inserisci la moneta: ");
    scanf("%d", &m);
        if(m==1 || m==5 || m==10 || m==20 || m==50){
            t+=m;
        }
        else{
            printf("ERRORE: Moneta non valida!\n");
        }
    }while(t<c);
    
    r=t-c;
    printf("Il resto equivale a: %d\n",r);

    r5=r/5;
    r=r%5;
    r1=r;

    printf("Il resto viene restituito in: \n");
    printf("%d monete da 5 centesimi. \n", r5);
    printf("%d monete da 1 centesimo. ", r1);

    return 0;
}
