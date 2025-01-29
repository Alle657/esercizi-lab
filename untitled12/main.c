#include <stdio.h>

void raddoppia(int *a) { //raddoppia il numero
    *a = *a * 2;
}

int main(void) {
    int a;
    printf("Inserisci un numero: ");
    scanf("%d", &a);
    raddoppia(&a);
    printf("Il numero raddoppiato è: %d\n", a);

    return 0;
}
