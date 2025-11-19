#include <stdio.h>

int main(void){
    int matriz[4][4];

    for(int i = 0; i < 4; i++){

        for(int j = 0; j < 4; j++){

            printf("Digite o elemento a(%d,%d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);


        }

    }

    printf("======MATRIZ ORIGINA======\n");
    for(int i = 0; i < 4; i++){

        for(int j = 0; j < 4; j++){

            printf("%d ", matriz[i][j]);
            
        }

        printf("\n");
    }

    printf("======MATRIZ TRIANGULAR INFERIOR======\n");
     for(int i = 0; i < 4; i++){

        for(int j = 0; j < 4; j++){

            if(i < j)
                matriz[i][j] = 0;
            
            printf("%d ", matriz[i][j]);
            
        }

        printf("\n");
    }

    return 0;
}