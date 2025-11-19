#include <stdio.h>

int main(void){
    int matriz[4][4];
    int qtdMaiorDez = 0;

    for(int i = 0; i < 4; i++){

        for(int j = 0; j < 4; j++){

            printf("Digite o elemento a(%d,%d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);

            if(matriz[i][j] > 10)
                qtdMaiorDez++;

        }

    }


    printf("A matriz possui %d valores maiores que 10\n", qtdMaiorDez);


    return 0;
}