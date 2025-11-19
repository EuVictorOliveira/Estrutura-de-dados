#include <stdio.h>

int main(void){
    int matriz[3][3], soma = 0;

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){
            printf("Digite a(%d,%d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);

        }

    }

     for(int j = 0; j < 3; j++){

        for(int i = 0; i < 3; i++){
            soma += matriz[i][j];
        }

        printf("%d ", soma);
        soma = 0;

    }

    printf("\n");

    return 0;

}