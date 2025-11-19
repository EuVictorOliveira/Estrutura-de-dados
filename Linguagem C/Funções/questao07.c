#include <stdio.h>

double ConverteFahrenheit(int celsius){

    double Fahrenheit = celsius * (9.0/5.0) + 32.0;

    return Fahrenheit;

}

int main(void){
    int celsius;

    printf("Digite a temperatura(em celsius): ");
    scanf("%d", &celsius);

    double valorConvertido = ConverteFahrenheit(celsius);

    printf("%d graus celsius em Fahrenheit: %.2lf\n", celsius, valorConvertido);


    return 0;

}