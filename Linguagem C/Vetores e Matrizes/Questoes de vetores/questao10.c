#include <stdio.h>

int main(void){
    double notas[15], soma = 0.0;


    for(int i = 0; i < 15; i++){
        printf("Informe a nota %d: ", i+1);
        scanf("%lf", &notas[i]);

        soma += notas[i];

    }


    printf("Media das notas: %.2lf\n", soma / 15.0);






    return 0;

}