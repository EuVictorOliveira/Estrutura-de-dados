#include <stdio.h>

#define TAXA_AUMENTO 0.25;

int main(){
    double salario;


    printf("Informe o salario do funcionario: R$ ");
    scanf("%lf", &salario);

    double valorAumento = salario * TAXA_AUMENTO;
    salario += valorAumento;

    printf("Novo salario: R$ %.2lf\n", salario);

    return 0;

}