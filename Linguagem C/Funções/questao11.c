#include <stdio.h>

double CalculaMedia(int a, int b, int c, char tipo){
    double media;

    if(tipo == 'A')
        media = (double) (a+b+c) / 3.0;
    else
        media = (double) (5*a+3*b+2*c) / 10.0;


    return media;

}




int main(void){
    int nota1, nota2, nota3;
    char tipo;

    printf("Digite a nota 1: ");
    scanf("%d", &nota1);

    printf("Digite a nota 2: ");
    scanf("%d", &nota2);

    printf("Digite a nota 3: ");
    scanf("%d%*c", &nota3);

    printf("Informe o tipo de media(A ou P): ");
    scanf("%c", &tipo);


    printf("Media: %.2lf\n", CalculaMedia(nota1, nota2, nota3, tipo));

    return 0;

}