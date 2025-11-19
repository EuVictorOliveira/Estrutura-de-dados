#include <stdio.h>

int main(){
    int codigo, qtdProduto;
    double valorTotal;


    printf("Informe o codigo do produto: ");
    scanf("%d", &codigo);
    printf("Informe a quantidade do produto: ");
    scanf("%d", &qtdProduto);



    switch (codigo){
        case 100:
            valorTotal = 1.20 * qtdProduto;
            break;
        
         case 101:
            valorTotal = 1.30 * qtdProduto;
            break;
        
         case 102:
            valorTotal = 1.50 * qtdProduto;
            break;

         case 103:
            valorTotal = 1.20 * qtdProduto;
            break;

         case 104:
            valorTotal = 1.70 * qtdProduto;
            break;

         case 105:
            valorTotal = 2.20 * qtdProduto;
            break;

         case 106:
            valorTotal = 1.00 * qtdProduto;
            break;
        default:
            printf("Codigo invalido\n");
            break;
    }

    printf("Valor total: %.2lf\n", valorTotal);

    return 0;

}