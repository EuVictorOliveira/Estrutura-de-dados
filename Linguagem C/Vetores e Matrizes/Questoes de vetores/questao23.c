#include <stdio.h>

int main(void){
    double a[10], b[10];

    for(int i = 0; i < 10; i++){
         printf("Informe o valor %d de A: ", i+1);
         scanf("%lf", &a[i]);
    }

    printf("\n");
    for(int i = 0; i < 10; i++){
         printf("Informe o valor %d de B: ", i+1);
         scanf("%lf", &b[i]);
    }

    double produtoEscalar = 0;

    for(int i = 0; i < 10; i++){
        produtoEscalar += a[i] * b[i];
    }


    for(int i = 0; i < 10; i++){
         printf("A[%d] = %.2lf\n", i, a[i]);
    }

    printf("\n");
    for(int i = 0; i < 10; i++){
           printf("B[%d] = %.2lf\n", i, b[i]);
    }

    printf("\nProduto escalar = %.2lf\n", produtoEscalar);



    return 0;

}