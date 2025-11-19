#include <stdio.h>

#define PI 3.141592

double VolumeEsfera(double raio){

    double volume = (4.0/3) * PI * raio * raio * raio;

    return volume;

}



int main(void){
    double raio;

    printf("Digite o raio: ");
    scanf("%lf", &raio);

    double volume = VolumeEsfera(raio);

    printf("Volume da esfera: %.2lf\n", volume);

    return 0;

}