#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define DIM 20
#define MIN 1
#define MAX 1000

int main(void) {
    int vet[DIM];
    int i, valore, cont, trovato;
    float somma, media;
    int somma_pari = 0, somma_dispari = 0;
    srand(time(NULL));
    for (i = 0; i < DIM; i++) {
        vet[i] = rand() % ((MAX - MIN) + 1) + MIN;
    }

    somma = 0;
    for (i = 0; i < DIM; i++) {
        somma += vet[i];
        if (vet[i] % 2 == 0) {
            somma_pari += vet[i];
        } else {
            somma_dispari += vet[i];
        }
    }
    media = somma / DIM;
    printf("la media : %.2f", media);

    do {
        printf("Inserisci il valore: (min %d - max %d): ", MIN, MAX);
        scanf("%d", &valore);
        if (valore < MIN || valore > MAX) {
            printf("Valore non valido\n");
        }
    } while (valore < MIN || valore > MAX);

    cont = 0;
    for (i = 0; i < DIM; i++) {
        if (vet[i] == valore) {

            cont++;
        }




        printf("Somma dei numeri pari: %d\n", somma_pari);
        printf("Somma dei numeri dispari: %d\n", somma_dispari);


        printf("Inserisci il valore:" );
        scanf("%d", &valore);
        i = 0;
        trovato = -1;
        while((i <DIM) && (trovato == -1)){
            if(vet[i] == valore){
                trovato = 1;
            }
            i++;
        }
        if(trovato != -1){
            printf("il numero e in posizione %d", (trovato +1));
        }else{
            printf("il numero non ce");
        }


        return 0;
    }
}