#include <stdio.h>

int main(){
    double trabalhoLab, avalSemestral, exameFinal;

    printf("Informe a nota do trabalho: ");
    scanf("%lf", &trabalhoLab);

    if( trabalhoLab < 0.0 || trabalhoLab > 10.0){
        printf("Nota invalida. Encerrando programa!");
        return 1;
    }

    printf("Informe a nota da avaliacao semestral: ");
    scanf("%lf", &avalSemestral);

    if( avalSemestral < 0.0 || avalSemestral > 10.0){
        printf("Nota invalida. Encerrando programa!");
        return 1;
    }

    printf("Informe a nota do exame final: ");
    scanf("%lf", &exameFinal);

    if( exameFinal < 0.0 || exameFinal > 10.0){
        printf("Nota invalida. Encerrando programa!");
        return 1;
    }


    double media = (trabalhoLab * 2 + avalSemestral * 3 + exameFinal * 5) / 10.0;

    printf("media = %.2lf\n", media);

    if(media < 2.9)
        printf("Aluno reprovado\n");
    else if(media >= 3 && media <= 4.9)
        printf("Aluno em recuperacao\n");
    else
        printf("Aluno aprovado\n");

    return 0;

}