#include <stdio.h>

int main() {
    int d = 9;
    int v[100] = {3, 6, 7, 11, 14, 16, 20, 21, 25}; // Array abbastanza grande per l'inserimento
    int n;

    printf("Array: ");
    for (int i = 0; i < d; i++) {
        printf("%d ", v[i]);
    }

    printf("\nInserisci un nuovo valore: ");
    scanf("%d", &n);

    // Aumentiamo la dimensione dell'array
    d++;

    // Troviamo la posizione corretta dove inserire il nuovo elemento
    int pos = d - 1;
    while (pos > 0 && v[pos - 1] > n) {
        v[pos] = v[pos - 1];  // Sposta gli elementi a destra
        pos--;
    }

    v[pos] = n;  // Inserisci il nuovo elemento

    // Stampa l'array aggiornato
    printf("Array aggiornato: ");
    for (int i = 0; i < d; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
