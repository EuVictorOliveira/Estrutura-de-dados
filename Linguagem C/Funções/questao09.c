#include <stdio.h>

#define PI 3.141592

double VolumeCilindro(double altura, double raio){

    double volume = PI * raio * raio * altura;

    return volume;

}



int main(void){
    double altura, raio;

    printf("Informe a altura do cilindro: ");
    scanf("%lf", &altura);

    printf("Informe o raio do cilindro: ");
    scanf("%lf", &raio);

    double volumeCilindro = VolumeCilindro(altura, raio);

    printf("Volume: %.2lf\n", volumeCilindro);

    return 0;
}