#include <stdio.h>

int main(){
    double polegadas;

    printf("Informe o comprimento em polegas: ");
    scanf("%lf", &polegadas);
    printf("%.2lf polegadas em cm: %.2lf\n", polegadas, polegadas * 2.54);


    return 0;
}