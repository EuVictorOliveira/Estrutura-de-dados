#include <stdio.h>

int main(){
    double nota1, nota2, nota3;

    printf("Informe a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%lf", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%lf", &nota3);


    double media = (nota1 + nota2 + nota3 * 2) / 4.0;

    printf("media = %.2lf\n", media);
    if( media >= 60.0)
        printf("Aluno aprovado\n");
    else
        printf("Aluno reprovado\n");

 


    return 0;

}