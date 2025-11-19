#include <stdio.h>

int FatorialDuplo(int n){
    int produto = 1;

    for(int i = 1; i <= n; i++){

        if(i % 2 != 0)
            produto *= i;

    }

    return produto;

}

int main(void){
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = FatorialDuplo(n);

    printf("%d!! = %d\n", n, resultado);

    return 0;

}