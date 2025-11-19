#include <stdio.h>

int main(void){
    int m1[4][4], m2[4][4], m3[4][4];

    for(int i = 0; i < 4; i++){

        for(int j = 0; j < 4; j++){

            printf("Digite o elemento a(%d,%d) de M1: ", i+1, j+1);
            scanf("%d", &m1[i][j]);


        }

    }

    
    for(int i = 0; i < 4; i++){

        for(int j = 0; j < 4; j++){

            printf("Digite o elemento a(%d,%d) de M2: ", i+1, j+1);
            scanf("%d", &m2[i][j]);

            if(m1[i][j] >= m2[i][j])
                m3[i][j] = m1[i][j];
            else
                m3[i][j] = m2[i][j];

        }

    }

    for(int i = 0; i < 4; i++){

        for(int j = 0; j < 4; j++){

            printf("%d ", m3[i][j]);
            
        }

        printf("\n");
    }



    return 0;

}