#include <stdio.h>
#include <math.h>

int main(){
    int opcao;
    double n1, n2, n3;

    printf("Informe o primeiro numero: ");
    scanf("%lf", &n1);
    printf("Informe o segundo numero: ");
    scanf("%lf", &n2);
    printf("Informe o terceiro numero: ");
    scanf("%lf", &n3);

    printf("Escolha a opcao:\n");
    printf("1 - Media geometrica.\n");
    printf("2 - Media ponderada.\n");
    printf("3 - Media harmonica.\n");
    printf("4 - aritmetica.\n");
    printf("Opcao: ");
    scanf("%d", &opcao);



    switch (opcao) {
        case 1: {

            double mediaGeometrica = cbrt(n1 * n2 * n3);
            printf("Media geometrica = %.2lf\n", mediaGeometrica);

            break;
        }
        
        case 2:{

            double mediaPonderada = (n1 + 2*n2 + 3*n3) / 6;
            printf("Media ponderada = %.2lf\n", mediaPonderada);

            break;
        }
        case 3: {

            double mediaHarmonica = 1.0 / ((1.0 / n1) + (1.0 / n2) + (1.0 / n3));
            printf("Media harmonica = %.2lf\n", mediaHarmonica);

            break;
        }
        case 4: {

            double mediaAritmetica = (n1 + n2 + n3) / 3.0;
            printf("Media aritmetica = %.2lf\n", mediaAritmetica);

            break;
        }
        default:
            printf("Operacao invalida\n");
            break;
    }



    return 0;
}