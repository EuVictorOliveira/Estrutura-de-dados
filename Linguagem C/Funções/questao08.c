#include <stdio.h>
#include <math.h>

double Hipotenusa(double a, double b){

    double hipotenusa = sqrt(a*a + b*b);

    return hipotenusa;
}

int main(void){
    double a, b;

    printf("Digite o valor de a: ");
    scanf("%lf", &a);

    printf("Digite o valor de b: ");
    scanf("%lf", &b);

    double hipotenusa = Hipotenusa(a, b);

    printf("Hipotenusa: %.2lf\n", hipotenusa);

    return 0;

}