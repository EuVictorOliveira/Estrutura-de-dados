#include <stdio.h>

int main(void){
    int opcao, condicao = 1;
    double km, m;
    

    while(condicao){

        printf("=====MENU=====\n");
        printf("Converter km/h em m/s(1)\n");
        printf("Converter m/s em km/h(2)\n");
        printf("Encerrar(0)\n");
        printf("Informe uma opcao valida: ");
        scanf("%d", &opcao);


        switch (opcao){
            case 1:
                printf("Informe a velocidade em km/h: ");
                scanf("%lf", &km);

                m = km * 3.6;

                printf("%.2lf km/h em m/s: %.2lf\n\n", km, m);

                break;
        
            case 2:
                printf("Informe a velocidade em m/s: ");
                scanf("%lf", &m);

                km = m / 3.6;

                printf("%.2lf m/s em km/h: %.2lf\n\n", m, km);

                break;

            case 0: 
                printf("Encerrando!!!\n");
                condicao = 0;
                break;

            default:
                printf("Opcao invalida!!!\n\n");
                break;
        }

    }

    return 0;

}