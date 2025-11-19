#include <stdio.h>


int main(){
    double distancia, consumoGasolina; 

    printf("Informe a distancia(km): ");
    scanf("%lf", &distancia);

    printf("Informe o consumo de gasolina(l): ");
    scanf("%lf", &consumoGasolina);

    double desempenho = distancia / consumoGasolina;

    printf("O desempenho do carro eh: %.2lf km/l\n", desempenho);

    if(desempenho < 8)
        printf("Venda o carro\n");
    else if(desempenho >= 8 && desempenho <= 14)
        printf("Economico\n");
    else
        printf("Super economico\n");




    return 0;

}