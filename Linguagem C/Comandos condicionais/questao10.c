#include <stdio.h>

int main(){
    int altura;
    char sexo;

    printf("Informe a altura: ");
    scanf("%d", &altura);

    printf("Informe o sexo(M ou F): ");
    scanf("%c", &sexo);

    if(sexo == 'M'){
        printf("Peso ideal: %.2lf\n", (72.7 * altura ) - 58);
    }else
        printf("Peso ideal: %.2lf\n", (62.1 * altura ) - 44.7);




    return 0;

}