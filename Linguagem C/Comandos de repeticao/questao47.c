#include <stdio.h>

int main(void){
    int opcao, condicao = 1;
    double n1,n2;

    while(condicao){
        printf("ADICAO(1)\n");
        printf("SUBTRACAO(2)\n");
        printf("MULTIPLICACAO(3)\n");
        printf("DIVISAO(4)\n");
        printf("ENCERRAR(5)\n");
        printf("INFORME QUAL OPERACAO DESEJA REALIZAR: ");

        scanf("%d",&opcao);

        if(opcao == 5){
            printf("ENCERRANDO!!!\n");
            break;
        }
        
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
                printf("Opcao invalida\n");
                break;
        }
    }

    return 0;

}