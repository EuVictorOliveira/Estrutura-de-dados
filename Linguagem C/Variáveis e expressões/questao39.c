#include <stdio.h>

int main(){
    const double premio = 780000.0;

    double valorGanhador = premio * 0.46;
    double valorSegundo  = premio * 0.32;
    double valorTerceiro = premio - (valorGanhador + valorSegundo);

    printf("Premio ganhador: R$ %.2lf\n", valorGanhador);
    printf("Premio segundo lugar: R$ %.2lf\n", valorSegundo);
    printf("Premio terceiro lugar: R$ %.2lf\n", valorTerceiro);
 
    return 0;

}