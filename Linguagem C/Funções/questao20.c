#include <stdio.h>

int Fatorial(int n){
    int produto = 1;

    if(n == 0 || n == 1)
        return produto;
    else{

        for(int i = n; i > 0; i--)
            produto *= i;

    }

    return produto;

}

int main(void){
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = Fatorial(n);

    printf("Fatorial de %d = %d", n, resultado);

    return 0;

}