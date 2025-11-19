#include <stdio.h>

int main(){
    double nota1, nota2, nota3, nota4;

    printf("Informe o valor das quatro notas: ");
    scanf("%lf %lf %lf %lf", &nota1, &nota2, &nota3, &nota4);
    printf("media aritmetica das notas: %.2lf\n", (nota1+nota2+nota3+nota4) / 4.0);




    return 0;

}