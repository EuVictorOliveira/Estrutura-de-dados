#include <stdio.h>

int main(){
    double nota1, nota2;

    printf("Informe a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%lf", &nota2);


    if( (nota1 >= 0.0 && nota1 <= 10.0) && (nota2 >= 0.0 && nota2 <= 10.0))
        printf("media do aluno: %.2lf\n", (nota1+nota2) / 2.0);
    else
        printf("Notas invalidas");







    return 0;

}