#include <stdio.h>

int main(void){
    double tempFahrenheit;

    printf("Informe a temperatura em graus Fahrenheit: ");
    scanf("%lf", &tempFahrenheit);
    printf("%.2lf graus Fahrenheit em graus Celsius: %.2lf", tempFahrenheit, 5.0 * (tempFahrenheit - 32.0) / 9.0);


    return 0;
}