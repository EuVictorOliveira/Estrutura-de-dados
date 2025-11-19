#include <stdio.h>

int main(void){
    int n, somaDivisores = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    for(int i = 1; i < n; i++){

        if( n % i == 0){
            printf("%d eh divisor de %d\n", i, n);
            somaDivisores += i;
        }


    }

    printf("%d eh divisor de %d\n", n, n);
    printf("\n");
    printf("Soma dos divisores de %d = %d", n, somaDivisores);


    return 0;
}