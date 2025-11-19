#include <stdio.h>

int main(){
    double valorHora, salario;
    int nHoras;

    printf("Informe o valor da hora trabalhada: R$ ");
    scanf("%lf", &valorHora);

    printf("Informe a quantidade de horas trabalhadas: ");
    scanf("%d", &nHoras);

    salario = valorHora * nHoras;
    double novoSalario = salario + salario * 0.1;

    printf("O salario a ser pago eh: R$ %.2lf\n", novoSalario);




    return 0;

}