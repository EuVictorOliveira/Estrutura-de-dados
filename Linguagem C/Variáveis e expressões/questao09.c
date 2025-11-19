#include <stdio.h>

int main(){
    double tempCelsius;

    printf("Informe a temperatura em graus Celsius: ");
    scanf("%lf", &tempCelsius);
    printf("%.2lf graus Celsius em graus Kelvin: %.2lf", tempCelsius, tempCelsius + 273.15);

    return 0;
}