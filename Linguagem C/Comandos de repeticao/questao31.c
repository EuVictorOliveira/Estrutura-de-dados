#include <stdio.h>

int main(void){
    double soma; 

    int j = 1;
    for(int i = 1; i <= 99; i = i + 2){

        soma += (double) i / (double) j;
        j++;

    }


    printf("soma = %.2lf\n", soma);



    return 0;

}