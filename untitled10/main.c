#include <stdio.h>


int mcd(int a, int b) {
    if (b == 0)
        return a;
    return mcd(b, a % b);
}


void sommaFrazioni(int num1, int den1, int num2, int den2, int *numRis, int *denRis) {

    *numRis = num1 * den2 + num2 * den1;
    *denRis = den1 * den2;

    int divisore = mcd(*numRis, *denRis);
    *numRis /= divisore;
    *denRis /= divisore;

}
void moltiplicaFrazioni(int num1, int den1, int num2, int den2, int *numRis, int *denRis) {
    *numRis = num1 * num2;
    *denRis = den1 * den2;

    int divisore = mcd(*numRis, *denRis);
    *numRis /= divisore;
    *denRis /= divisore;
}
void dividiFrazioni(int num1, int den1, int num2, int den2, int *numRis, int *denRis) {
    *numRis = num1 * num2;
    *denRis = den2 * den1;

    int divisore = mcd(*numRis, *denRis);
    *numRis /= divisore;
    *denRis /= divisore;
}

void sottraiFrazioni(int num1, int den1, int num2, int den2, int *numRis, int *denRis) {

        *numRis = num1 * den2 - num2 * den1;
        *denRis = den1 * den2;

        int divisore = mcd(*numRis, *denRis);
        *numRis /= divisore;
        *denRis /= divisore;

        if (*denRis < 0) {
            *numRis = -*numRis;
            *denRis = -*denRis;
        }
    }






int main() {

    int num1 = 6, den1 = 4;
    int num2 = 4, den2 = 5;
    int numRis, denRis;

    sottraiFrazioni(num1, den1, num2, den2, &numRis, &denRis);

    printf("La somma delle frazioni e': %d/%d\n", numRis, denRis);



    return 0;
}
