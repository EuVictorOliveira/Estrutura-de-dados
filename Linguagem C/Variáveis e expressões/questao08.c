#include <stdio.h>

int main(){
    double tempKelvin;

    printf("Informe a temperatura em graus Kelvin: ");
    scanf("%lf", &tempKelvin);
    printf("%.2lf graus Kelvin em graus Celsius: %.2lf", tempKelvin, tempKelvin - 273.15);


    return 0;

}