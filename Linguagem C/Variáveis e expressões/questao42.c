#include <stdio.h>

int main(){
    double salarioBase;

    printf("Informe o salario bas: R$ ");
    scanf("%lf", &salarioBase);

    double taxaAumento = salarioBase * 0.05;
    double taxaImposto = salarioBase * 0.07;

    double NovoSalario = salarioBase + taxaAumento - taxaImposto;

    printf("O valor do salario eh: R$ %.2lf\n", NovoSalario);



    return 0;

}