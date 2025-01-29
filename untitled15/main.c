#include <stdio.h>

void inputvoti(int voti[], int dim) {
    for (int i = 0; i < dim; i++) {
        printf("%d \t", voti[i]);
    }
}


int main(void) {
    int temp;
    int dim = 7;
    int voti[7] = {6, 9, 3, 5, 7, 2,3};
    char persone[7] = {'A','B','C','D','E','F', 'G'};

    for(int i = 0; i<dim-1; i++) {

        int hoFattoScambi = 0;
        for(int k = 0; k<dim-1-i; k++) {

            if(voti[k] > voti[k+1]) {
                temp = voti[k];
                voti[k] = voti[k+1];
                voti[k+1] = temp;
                hoFattoScambi = 1;
                char u = persone[k];
                persone[k] = persone[k+1];
                persone[k+1] = u;
            }
        }
        if(hoFattoScambi == 0){
            break;
        }

    }
    for(int i = 0;i<dim;i++){
        printf("%d  %c\n", voti[i], persone[i]);
    }


    return 0;
}
