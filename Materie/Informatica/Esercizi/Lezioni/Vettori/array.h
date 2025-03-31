/**
 * funzione che stampa gli elementi di un vettore.
 * @param int [] vettore di interi 
 * @param int dimensione del vettore 
 * @param char separatore tra un elemento e un altro 
 */
void stampavettore(int v[], int d, char s);
/**
 * funzione che riempie un vettore con valori scelti dall'utente.
 * @param int [] vettore di interi 
 * @param int dimensione del vettore 
 */
void riempivettore(int v[], int d);
/**
 * funzione che riempie un vettore con numeri casuali compresi tra un minimo e un massimo.
 * @param int [] vettore di interi 
 * @param int dimensione del vettore 
 * @param int minimo valore minimo dei numeri casuali
 * @param int massimo valore dei numeri casuali
 */
void riempivettorecasuale(int v[], int d, int min, int max);
/**
 * funzione che calcola la media dei valori del vettore.
 * @param int [] vettore di interi 
 * @param int dimensione del vettore 
 */
void media(int v[],int dim);
/**
 * funzione che riempie un vettore con numeri casuali compresi tra un minimo e un massimo in ordine.
 * @param int [] vettore di interi 
 * @param int dimensione del vettore 
 * @param int minimo valore minimo dei numeri casuali
 * @param int massimo valore dei numeri casuali
 */
void riempivettoreordinatocasuale(int v[], int d, int min, int max);

int ricercabinaria(int v[], int d, int estInf, int estSup, int val);

int ricercasequenziale(int *v, int d, int val);
/**
 * funzione che conta la quantità di volte che appare il valore scelto.
 * @param int [] vettore di interi 
 * @param int dimensione del vettore 
 * @param int valore da contare
 */
int contavalori(int v[], int d, int val);
/**
 * funzione che scambia i valori contenuti di due valori.
 * @param int [] primo vettore di interi 
 * @param int [] secondo vettore di interi 
 * @param int dimensione del vettore 
 */
void scambiovettori(int v1[], int v2[], int d);