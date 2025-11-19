#include <stdio.h>
#include <math.h>

int main(){
    double a, b, hipotenusa;

    printf("Informe o valor dos catetos: ");
    scanf("%lf %*c %lf", &a, &b);

    hipotenusa = sqrt(a*a + b*b);

    printf("O valor da hipotenusa eh: %.2lf\n", hipotenusa);
        



    return 0;

}