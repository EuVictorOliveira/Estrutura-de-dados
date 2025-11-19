#include <stdio.h>

int main(void){
    int n, qtdDivisores = 2;

    printf("Informe um numero inteiro maior que 1: ");
    scanf("%d", &n);

    for(int i = 2; i < n; i++){

        if(n % i == 0)
            qtdDivisores++;


    }

    if(qtdDivisores > 2)
        printf("%d nao eh primo\n", n);
    else
        printf("%d eh primo\n", n);

    return 0;

}