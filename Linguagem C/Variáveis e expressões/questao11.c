#include <stdio.h>

int main(){
    double m;

    printf("Informe a velocidade em m/s: ");
    scanf("%lf", &m);
    printf("%.2lf m/s em km/h: %.2lf\n", m, m * 3.6 );




    return 0;

}