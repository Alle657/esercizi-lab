#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define DIM 10
#define MIN 1
#define MAX 10

int main(void) {
    int vet[DIM];
    int i;

    srand(time(NULL));
    for (i = 0; i < DIM; i++) {
        vet[i] = rand() % ((MAX - MIN) + 1) + MIN;
    }


    for (i = 0; i < DIM; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");


    int primo = vet[0];
    for (i = 0; i < DIM - 1; i++) {
        vet[i] = vet[i + 1];
    }
    vet[DIM - 1] = primo;


    for (i = 0; i < DIM; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}
