#include <stdio.h>

int main(void){
    int idade, soma = 0, contador = 0;
    double media;

    while(1){

        printf("Informe a idade: ");
        scanf("%d", &idade);


        if( idade == 0 ){
            printf("ENCERRANDO !!!\n");
            break;
        }

        soma += idade;
        contador++;



    }

    media = (double) soma / contador;
    printf("Qtd de pessoas: %d\n", contador);
    printf("Media: %.2lf\n", media);


    return 0;

}