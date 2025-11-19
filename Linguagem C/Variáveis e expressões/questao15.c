#include <stdio.h>

int main(){
    double radianos;

    printf("Informe o valor do angulo em radianos: ");
    scanf("%lf", &radianos);
    printf("%.2lf radianos em graus: %.2lf\n", radianos, radianos *(180/3.14));


    return 0;
}