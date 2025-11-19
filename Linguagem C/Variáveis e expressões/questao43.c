#include <stdio.h>

int main(){
    double valor;

    printf("Informe o valor do produto: R$ ");
    scanf("%lf", &valor);

    printf("Valor com desconto de 10%%: R$ %.2lf\n", valor - valor * 0.1);
    printf("Valor parcelado em 3x sem juros: R$ %.2lf\n", valor / 3.0);
    printf("Valor da comissao para pagamento a vista: R$ %.2lf\n", (valor - valor * 0.1) * 0.05 );
    printf("Valor da comissao para pagamento parcelado: R$ %.2lf\n", valor * 0.05);




    return 0;


}