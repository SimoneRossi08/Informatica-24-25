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

void riempivettoreordinatocasuale(int v[], int d, int min, int max);

int ricercabinaria(int v[], int d, int estInf, int estSup, int val);

int ricercasequenziale(int *v, int d, int val);

int contavalori(int v[], int d, int val);