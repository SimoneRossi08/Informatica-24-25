#include <stdio.h>
#include <stdlib.h>

#define DIM 10

void inizializzaGriglia(char griglia[DIM][DIM]) {
    for(int i=0; i<DIM; i++)
        for(int j=0; j<DIM; j++)
            griglia[i][j] = '.';
}

void stampaGriglia(char griglia[DIM][DIM]) {
    printf("  ");
    for(int j=0; j<DIM; j++) printf("%d ", j);
    printf("\n");
    for(int i=0; i<DIM; i++) {
        printf("%d ", i);
        for(int j=0; j<DIM; j++) {
            printf("%c ", griglia[i][j]);
        }
        printf("\n");
    }
}

int posizioneValida(char griglia[DIM][DIM], int r, int c, int dim, char dir) {
    if(dir == 'O') {
        if(c + dim > DIM) return 0;
        for(int j=0; j<dim; j++)
            if(griglia[r][c+j] != '.') return 0;
    } else if(dir == 'V') {
        if(r + dim > DIM) return 0;
        for(int i=0; i<dim; i++)
            if(griglia[r+i][c] != '.') return 0;
    } else return 0;
    return 1;
}

void posizionaNave(char griglia[DIM][DIM], int dim, const char* nome, int num) {
    for(int n=0; n<num; n++) {
        int r, c; char dir;
        int ok = 0;
        do {
            printf("Posiziona la nave %d (dimensione %d)\n", n+1, dim);
            printf("Inserisci riga (0-9): ");
            scanf("%d", &r);
            printf("Inserisci colonna (0-9): ");
            scanf("%d", &c);
            printf("Direzione (O=orizzontale, V=verticale): ");
            scanf(" %c", &dir);
            if(posizioneValida(griglia, r, c, dim, dir)) {
                if(dir == 'O')
                    for(int j=0; j<dim; j++) griglia[r][c+j] = '#';
                else
                    for(int i=0; i<dim; i++) griglia[r+i][c] = '#';
                ok = 1;
            } else {
                printf("Posizione non valida! Riprova.\n");
            }
            stampaGriglia(griglia);
        } while(!ok);
    }
}

void posizionaPortaerei(char griglia[DIM][DIM]) {
    posizionaNave(griglia, 5, "", 1);
}
void posizionaCorazzata(char griglia[DIM][DIM]) {
    posizionaNave(griglia, 4, "", 1);
}
void posizionaIncrociatori(char griglia[DIM][DIM]) {
    posizionaNave(griglia, 3, "", 2);
}
void posizionaCacciatorpediniere(char griglia[DIM][DIM]) {
    posizionaNave(griglia, 2, "", 3);
}
void posizionaSottomarini(char griglia[DIM][DIM]) {
    posizionaNave(griglia, 1, "", 4);
}

int main() {
    char griglia[DIM][DIM];
    inizializzaGriglia(griglia);
    stampaGriglia(griglia);
    posizionaPortaerei(griglia);
    posizionaCorazzata(griglia);
    posizionaIncrociatori(griglia);
    posizionaCacciatorpediniere(griglia);
    posizionaSottomarini(griglia);
    printf("Tutte le navi sono state posizionate!\n");
    stampaGriglia(griglia);
    return 0;
}