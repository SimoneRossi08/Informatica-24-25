/*Gioco della Morra cinese: supponendo sasso=1, carta=2, forbice=3,
chiedere all’utente la sua scelta e far generare al computer la sua.
Stabilire il vincitore.
N.B.:per chi non conoscesse il gioco: sasso vince forbice, sasso perde carta, carta perde forbice.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    //utente
    int sasso=1;
    int carta=2;
    int forbice=3;
    int obj=0;
    int flag=0;

    //computer
    srand(time(NULL));
    int max=3;
    int min=1;
    int pc=rand()%(max-min+1)+min;

    printf("Scegli l'oggetto che vuoi usare: ");
    printf("\n1) Sasso");
    printf("\n2) Carta");
    printf("\n3) Forbice\n\n");
    scanf("%d", &obj);

    if(obj!=pc){
        if(obj==1){
            if(pc==2){
                flag=2;
            }
            if(pc==3){
                flag=1;
            }
        }
        if(obj==2){
            if(pc==1){
                flag=1;
            }
            if(pc==3){
                flag=2;
            }
        }
        if(obj==3){
            if(pc==2){
                flag=1;
            }
            if(pc==1){
                flag=2;
            }
        }

    }
    if(obj==pc){
        flag=0;
    }

    if(flag==0){
        printf("Pari, nessuno ha vinto.");
    }
    else if(flag==1){
        printf("Hai vinto! L'utente ha vinto.");
    }
    else if(flag==2){
        printf("Hai perso... Il computer ha vinto.");
    }
    
    return 0;
}
