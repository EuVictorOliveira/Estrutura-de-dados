#include <stdio.h>

int main(){
    double milhas;

    printf("Informe a distancia em milhas: ");
    scanf("%lf", &milhas);
    printf("%.2lf milhas em quilometros: %.2lf\n", milhas, milhas * 1.61);


    return 0;

}