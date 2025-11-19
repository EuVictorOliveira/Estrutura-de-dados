#include <stdio.h>

int QtdNumerosPrimos(int n){
    int qtdPrimos = 0;

    for(int i = 2; i < n; i++){
        int ehPrimo = 1;

        for(int j = ++i; j < i; j++){
            if(i % j == 0){
               ehPrimo = 0;
            }
        }

        if(ehPrimo){
            qtdPrimos++;
        }

    }

    return qtdPrimos;

}


int main(void){
    int n;

    printf("Digite n: ");
    scanf("%d", &n);

    int resultado = QtdNumerosPrimos(n);

    printf("qtd de primos abaio de %d: %d\n", n, resultado);

    return 0;

}