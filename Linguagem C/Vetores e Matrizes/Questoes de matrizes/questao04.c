#include <stdio.h>

int main(void){
    int matriz[4][4];
    int maior, posicaoLinha, posicaoColuna;




    for(int i = 0; i < 4; i++){

        for(int j = 0; j < 4; j++){

            printf("Digite o elemento a(%d,%d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);


        }

    }

    maior = matriz[0][0];
    for(int i = 0; i < 4; i++){

        for(int j = 0; j < 4; j++){

            if(matriz[i][j] > maior){
                maior = matriz[i][j];
                posicaoLinha = i;
                posicaoColuna = j;
            }
        }
    }

    
    for(int i = 0; i < 4; i++){

        for(int j = 0; j < 4; j++){

            printf("%d ", matriz[i][j]);
            
        }

        printf("\n");
    }

    printf("Maior valor: %d\n", maior);
    printf("Linha: %d\n", ++posicaoLinha);
    printf("Coluna: %d\n", ++posicaoColuna);

    return 0;
}