#include <stdio.h>

int main(){
    double cm;

    printf("Informe o comprimento em centimetros: ");
    scanf("%lf", &cm);
    printf("%.2lf centimentros em polegas: %.2lf\n", cm, cm / 2.54);


    return 0;
}