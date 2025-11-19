#include <stdio.h>

int main(){
    double litros;

    printf("Informe o volume em litros: ");
    scanf("%lf", &litros);
    printf("%.2lf litros em metros cubicos: %.2lf\n", litros, litros / 1000);


    return 0;
}