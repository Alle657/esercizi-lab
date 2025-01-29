#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sommaArray(int array[], int dimensione) {
    int somma = 0;
    for (int i = 0; i < dimensione; i++) {
        somma += array[i];
    }
    return somma;
}

int main() {
    int array[10];
    int dimensione = 10;

    srand(time(NULL));

    for (int i = 0; i < dimensione; i++) {
        array[i] = rand() % 10;
    }

    printf("Elementi dell'array: ");
    for (int i = 0; i < dimensione; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int somma = sommaArray(array, dimensione);
    printf("Somma degli elementi: %d\n", somma);

    return 0;
}
