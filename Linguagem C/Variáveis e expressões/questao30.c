#include <stdio.h>

int main(){
    double real;

    printf("Informe um valor em real: ");
    scanf("%lf", &real);
    printf("%.2lf reais em dolar: %.2lf\n", real, real / 5.67);


    return 0;

}