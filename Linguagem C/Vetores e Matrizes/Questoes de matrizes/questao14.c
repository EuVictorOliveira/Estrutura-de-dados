#include <stdio.h>
#include <stdlib.h>

int main(void){
    int cartela[5][5];

    printf("=====CARTELA=====\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){

            cartela[i][j] = rand() % 99;

            printf("%d ", cartela[i][j]);

        }

        printf("\n");
    }

    return 0;

}