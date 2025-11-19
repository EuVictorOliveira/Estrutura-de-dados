#include <stdio.h>

int main(void){
    int matriz[3][3];
    

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){
            printf("Digite o valor de a(%d,%d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            
        }
    }

    printf("====MATRIZ ORIGINAL====\n\n");
    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){

            printf("%d ", matriz[i][j]);
            
        }

        printf("\n");
    }

    printf("\n====MATRIZ TRANSPOSTA====\n\n");
    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){

            printf("%d ", matriz[j][i]);
            
        }

        printf("\n");
    }

    printf("\n");

    return 0;

}