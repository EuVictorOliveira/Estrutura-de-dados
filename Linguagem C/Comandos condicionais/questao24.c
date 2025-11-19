#include <stdio.h>
#include <string.h>

int main(){
    double valorProduto, precoFinal;
    char estadoDestino[2];


    printf("Informe o valor do produto: R$ ");
    scanf("%lf", &valorProduto);

    printf("Informe o estado de destino: ");
    scanf("%s", estadoDestino);

    if (strcmp(estadoDestino, "MG") == 0) {
        precoFinal = valorProduto * 1.07;
    } else if (strcmp(estadoDestino, "SP") == 0) {
        precoFinal = valorProduto * 1.12;
    } else if (strcmp(estadoDestino, "RJ") == 0) {
        precoFinal = valorProduto * 1.15;
    } else if (strcmp(estadoDestino, "MS") == 0) {
        precoFinal = valorProduto * 1.08;
    } else {
        printf("Estado inválido.\n");
        return 1;
    }


    printf("O valor final eh: R$ %.2lf", precoFinal);





    return 0;

}