#include <stdio.h>

int main(){
    double km;

    printf("Informe a velocidade em km/h: ");
    scanf("%lf", &km);
    printf("%.2lf km/h em m/s: %.2lf\n", km, km / 3.6);



    return 0;
}