#include <stdio.h>

int main(void){
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma = A[0] + A[1] + A[5];


    printf("Valor da soma: %d\n", soma);
    A[3] = 100;

    for(int i = 0; i < 6; i++){
        printf("A[%d] = %d\n", i, A[i]);
    }


    return 0;
}