#include <stdio.h>

int main(void){
    int opcao;
    double n1,n2;


    printf("ADICAO(1)\n");
    printf("SUBTRACAO(2)\n");
    printf("MULTIPLICACAO(3)\n");
    printf("DIVISAO(4)\n");
    printf("INFORME QUAL OPERACAO DESEJA REALIZAR: ");

    scanf("%d",&opcao);

    printf("Informe os dois numeros da operacao: ");
    scanf("%lf %lf", &n1,&n2);

    switch (opcao){
    case 1:
        printf("Soma: %.2lf\n", n1+n2);
        break;
    case 2:
        printf("Subtracao: %.2lf\n", n1-n2);
        break;
    case 3:
        printf("Multiplicacao: %.2lf\n", n1*n2);
        break;
    case 4:
        printf("Divisao: %.2lf\n", n1/n2);
        break;
    default:
        printf("Operacao invalida\n");
        break;
    }


    return 0;

}