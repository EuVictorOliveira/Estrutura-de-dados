#include <stdio.h>

void CalculaConsumo(double d, double g){

    double consumo = d / g;

    if(consumo < 8)
        printf("Consumo: %.2lf\nVenda o carro!\n", consumo);
    else if(consumo >= 8 && consumo < 14 )
        printf("Consumo: %.2lf\nEconomico!\n", consumo);
    else
        printf("Consumo: %.2lf\nSuper Economico!\n", consumo);

}

int main(void){
    double distancia, qtdGasolina;

    printf("Digite a distancia:(km): ");
    scanf("%lf", &distancia);

    printf("Digite a qtd de gasolina(l): ");
    scanf("%lf", &qtdGasolina);

    CalculaConsumo(distancia, qtdGasolina);

    return 0;

}