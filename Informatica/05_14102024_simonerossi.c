    /*Memorizzare il seme e il punteggio di due carte da poker. Dire quale delle carte vale di più.
Il valore di una carta da poker è dato in primo luogo dal punteggio e in caso di parità di punteggio dal seme.
    I punteggi in ordine decrescente sono {k,q,j,9,8,7,6,5,4,3,2,1}, i semi in ordine decrescente sono 
        {cuori, quadri, fiori, picche} per i semi memorizzare solo la lettera iniziale del seme.
PS: l’ordine dei semi può essere ricordato grazie alla frase “come quando fuori piove” in cui le parole
                    ricordano i nomi dei semi (cuori, quadri, fiori, picche).*/

#include<stdio.h>

int main()
{
    int p1,p2,s1,s2;
    int j=11;
    int q=12;
    int k=13;

    printf("Inserisci il punteggio e il seme della prima carta: ");
    scanf(" %d %d",&p1,&s1);

    if(p1=='k')
        p1=13;
    else if(p1==q)
        p1=12;
    else if(p1==j)
        p1=11;
    else if(p1==9)
        p1=9;
    else if(p1==8) 
        p1=8;
    else if(p1==7)
        p1=7;
    else if(p1==6)
        p1=6;
    else if(p1==5)
        p1=5;
    else if(p1==4)
        p1=4;
    else if(p1==3)
        p1=3;
    else if(p1==2)
        p1=2;
    else if(p1==1)
        p1=1;

    printf("Inserisci il punteggio e il seme della seconda carta: ");
    scanf(" %d %d",&p2,&s2);

    if(p2==k)
        p2=13;
    else if(p2==q)
        p2=12;
    else if(p2==j)
        p2=11;
    else if(p2==9)
        p2=9;
    else if(p2==8)
        p2=8;
    else if(p2==7)
        p2=7;
    else if(p2==6)
        p2=6;
    else if(p2==5)
        p2=5;
    else if(p2==4)
        p2=4;
    else if(p2==3)
        p2=3;
    else if(p2==2)
        p2=2;
    else if(p2==1)
        p2=1;

    if(p1>p2){
        printf("La prima carta vale di più.");
    }
    else if(p1<p2){
        printf("La seconda carta vale di più.");
    }
    else{
        if(s1<s2){
            printf("La prima carta vale di più.");
        }
        else if(s1>s2){
            printf("La seconda carta vale di più.");
        }
        else{
            printf("Le carte sono uguali.");
        }
    }

    return 0;
}


