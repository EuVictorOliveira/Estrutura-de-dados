#include <stdio.h>

#define TAXA_DESCONTO 0.12;

int main(){
    double valorProduto, desconto;

    printf("Informe o valor do produto: R$ ");
    scanf("%lf", &valorProduto);
    
    desconto = valorProduto * TAXA_DESCONTO;
    valorProduto -= desconto;

    printf("O novo valor do produto eh: R$ %.2lf\n", valorProduto);



    return 0;

}
