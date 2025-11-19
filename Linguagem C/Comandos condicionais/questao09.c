#include <stdio.h>

int main(){
    double salarioFuncionario, valorPrestacao;

    printf("Informe o salario do funcionario: R$ ");
    scanf("%lf", &salarioFuncionario);

    printf("Informe o valor da prestacao: R$ ");
    scanf("%lf", &valorPrestacao);

    if(valorPrestacao <= salarioFuncionario * 0.2)
        printf("Emprestimo concedido");
    else
        printf("Emprestimo nao concedido");




    return 0;

}