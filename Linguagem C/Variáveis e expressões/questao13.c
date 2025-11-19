#include <stdio.h>

int main(){
    double quilometros;

    printf("Informe a distancia em quilometros: ");
    scanf("%lf", &quilometros);
    printf("%.2lf quilometros em milhas: %.2lf\n", quilometros, quilometros / 1.61);


    return 0;

}