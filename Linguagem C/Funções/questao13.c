#include <stdio.h>

double Calculadora(double a, double b, char operacao){
    double valor;

    switch (operacao){
        case '+': 

            valor = a + b;
            return valor;

        break;
        
        case '-':

            valor  = a - b;
            return valor;
        
        break;

        case '*': 

            valor = a * b;
            return valor;

        break;

        case '/': 

            valor = a / b;
            return valor;

        break;

    
        default:

            printf("Operacao invalida\n");
            return 0;
            break;
    }
}


int main(void){
    double n1, n2;
    char opcao;

    printf("Digite N1: ");
    scanf("%lf", &n1);

    printf("Digite N2: ");
    scanf("%lf%*c", &n2);

    printf("Informe a operacao(+, -, *, /): ");
    scanf("%c", &opcao);

    double resultado = Calculadora(n1, n2, opcao);

    printf("Resultado = %.2lf\n", resultado);

    return 0;

}