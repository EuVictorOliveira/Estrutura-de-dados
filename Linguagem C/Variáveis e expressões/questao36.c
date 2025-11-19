#include <stdio.h>


int main(){
    double raioBase, altura, volumeCilindro;

    printf("Informe o raio da base do cilindro: ");
    scanf("%lf", &raioBase);
    printf("Informe a altura do cilindro: ");
    scanf("%lf", &altura);

    volumeCilindro = 3.141592 * raioBase * raioBase * altura;


    printf("Volume do cilindro: %.2lf\n", volumeCilindro);



    return 0;

}