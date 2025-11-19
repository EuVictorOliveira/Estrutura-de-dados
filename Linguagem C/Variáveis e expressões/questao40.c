#include <stdio.h> 

int main(){
    const double valorDiaria = 30.00;
    const double taxaImposto = 0.08;
    int nDias;

    printf("Informe o quantidade de dias trabalhados: ");
    scanf("%d", &nDias);

    double salarioBruto = nDias * valorDiaria;
    double desconto = salarioBruto * taxaImposto;
    double salarioLiquido = salarioBruto - desconto;

    printf("Salario liquido: R$ %.2lf\n", salarioLiquido);


    return 0;

}