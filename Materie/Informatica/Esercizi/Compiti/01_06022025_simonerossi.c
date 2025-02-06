/* Gestore di conti bancari con un menù interattivo.
    Funzionalità:
    - Deposito di denaro (passando il saldo per riferimento).
    - Prelievo di denaro (passando il saldo per riferimento, con controllo di saldo sufficiente).
    - Visualizzazione del saldo (passando il saldo per valore).
    - Esci dal programma. */

 #include <stdio.h>

void deposita(float *_saldo, float _importo);
void preleva(float *_saldo, float _importo);
void mostra_saldo(float _saldo, int *_decimali);
void mostra_menu();

int main(){
    float saldo=0, importo;
    int scelta,decimali;

    mostra_menu();
    do{
        scanf("%d", &scelta);
        switch(scelta){
            case 1:
                printf("Quanto vuole depositare? ");
                scanf("%f", &importo);
                deposita(&saldo, importo);
                break;
            case 2:
                printf("Quanto vuole prelevare? ");
                scanf("%f", &importo);
                preleva(&saldo, importo);
                break;
            case 3:
                mostra_saldo(saldo, decimali);
                break;
            case 4:
                printf("Sei uscito con successo. ");
                break;
            default:
                printf("Scelta inesistente. ");
                break;
        }
    }while(scelta!=4);  
}

void mostra_menu(){
    system("clear");
    printf("Quale azione vuole eseguire?\n");
    printf("1) Deposta denaro. \n");
    printf("2) Preleva Denaro\n");
    printf("3) Mostra saldo. \n");
    printf("4) Esci. \n");
}

void mostra_saldo(float _saldo, int *_decimali){

    printf("Scegli un numero decimale tra 0, 1 e 2: ");
    scanf("%d", &*_decimali);

    switch(*_decimali){
        case 0:
            printf("Il tuo saldo è %.0f\n", _saldo);
            break;
        case 1:
            printf("Il tuo saldo è %.1f\n", _saldo);
            break;
        case 2:
            printf("Il tuo saldo è %.2f\n", _saldo);
            break;
        default:
            printf("Scelta inesistente. ");
            break;
    }
}

void deposita(float *_saldo, float _importo){
    *_saldo+=_importo;
}

void preleva(float *_saldo, float _importo){
    if(_importo<=*_saldo){
        *_saldo-=_importo;
    }
    else{
        printf("Denaro insufficente. \n: ");
    }
}