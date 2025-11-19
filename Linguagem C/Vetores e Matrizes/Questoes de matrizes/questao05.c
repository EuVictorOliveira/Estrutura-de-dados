#include <stdio.h>

int main(void){
    int matriz[5][5];
    int x, encontrado = 0, posicaoLinha, posicaoColuna;

    for(int i = 0; i < 5; i++){

        for(int j = 0; j < 5; j++){

            printf("Digite o valor de a(%d,%d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);

        }
    }

    printf("Digite o valor de x: ");
    scanf("%d", &x);

     for(int i = 0; i < 5; i++){

        for(int j = 0; j < 5; j++){

            if(matriz[i][j] == x){
                encontrado = 1;
                posicaoLinha = i;
                posicaoColuna = j;
                break;
            }

        }

        if(encontrado)
            break;

    }

    if(encontrado){
        printf("%d encontrado em a(%d,%d)\n", x, ++posicaoLinha, ++posicaoColuna);
    }else{
        printf("%d nao encontrado\n", x);
    }

    return 0;

}