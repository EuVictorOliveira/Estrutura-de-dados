#include <stdio.h>

int main(void){
    int n;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){

        if( n % i == 0){
            printf("%d eh divisor de %d\n", i, n);
        }


    }

    return 0;
}