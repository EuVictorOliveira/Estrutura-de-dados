#include <stdio.h>

int main(void){
    double peso, altura;

    printf("Informe o peso(kg): ");
    scanf("%lf", &peso);

    printf("Informe a altura(m): ");
    scanf("%lf", &altura);

    double imc = peso / (altura * altura);

    if(imc >= 40.0)
        printf("imc = %.2lf\nObesidade grau III(morbida)\n", imc);
    else if(imc <= 39.9 && imc >= 35.0)
        printf("imc = %.2lf\nObesidade grau II(severa)\n", imc);
    else if(imc <= 34.9 && imc >= 30.0)
        printf("imc = %.2lf\nObesidade grau I\n", imc);
    else if(imc <= 29.9 && imc >= 25.0)
        printf("imc = %.2lf\nPeso em excesso\n", imc);
    else if(imc <= 24.9 && imc >= 18.6)
        printf("imc = %.2lf\nSaudavel\n", imc);
    else
        printf("imc = %.2lf\nAbaixo do peso\n", imc);

    return 0;
}