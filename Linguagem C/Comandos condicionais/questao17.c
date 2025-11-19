#include <stdio.h>

int main(){
    int baseMaior, baseMenor, altura;

    printf("informe o valor da base maior: ");
    scanf("%d", &baseMaior);

    if(baseMaior < 0){
        printf("Valor invalido. Encerrando programa\n");
        return 1;
    }

    printf("Informe o valor da base menor: ");
    scanf("%d", &baseMenor);

    if(baseMenor < 0){
        printf("Valor invalido. Encerrando programa\n");
        return 1;
    }

    printf("Informe a altura: ");
    scanf("%d", &altura);


    double areaTrapezio = ((baseMaior + baseMenor) * altura) / 2.0;


    printf("area do trapezio = %.2lf\n", areaTrapezio);


    return 0;

}