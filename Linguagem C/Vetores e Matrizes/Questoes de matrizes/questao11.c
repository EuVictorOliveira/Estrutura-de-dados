#include <stdio.h>

int main(void){
    int matriz[3][3];
    int soma = 0;

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){
            printf("Digite o valor de a(%d,%d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);

            if( (i+j+2) == 4)
                soma += matriz[i][j];
            
        }
    }

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){

            printf("%d ", matriz[i][j]);
            
        }

        printf("\n");
    }

    printf("Soma = %d", soma);

    
    return 0;

}