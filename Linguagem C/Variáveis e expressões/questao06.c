#include <stdio.h>

int main(){
    double tempCelsius;

    printf("Informe a temperatura em graus celsius: ");
    scanf("%lf", &tempCelsius);
    printf("%.2lf graus Celsius em Fahrenheit: %.2lf", tempCelsius, tempCelsius * (9.0/5.0) + 32.0 );

    return 0;
}