#include <stdio.h>
void inputArray(int array[], int dim){
    for(int i = 0;i < dim; i++){
        printf("%d \t", array[i]);
    }
}


int main(void) {
    int temp;
    int dim = 6;
    int array[6] = {12,7,3,9,6,15};

    for(int i = 0; i<dim-1; i++) {
        inputArray(array, dim);
        int hoFattoScambi = 0;
        for(int k = 0; k<dim-1-i; k++) {

            if(array[k] < array[k+1]) {
                temp = array[k];
                array[k] = array[k+1];
                array[k+1] = temp;
                hoFattoScambi = 1;
            }
        }
        if(hoFattoScambi == 0){
            break;
        }

    }
    inputArray(array, dim);




    return 0;
}
