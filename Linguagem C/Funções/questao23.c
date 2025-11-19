#include <stdio.h>

void ImprimeTriangulo(int n){

    for(int i = 1; i <= n; i++){

        for(int j = 0; j < i; j++){
            printf("*");
        }

        printf("\n");

    }

    for(int i = --n; i > 0; i--){

        for(int j = i; j > 0; j--){
            printf("*");
        }

        printf("\n");

    }

}

int main(void){
    int n;

    printf("Digite o numero de linhas: ");
    scanf("%d", &n);

    ImprimeTriangulo(n);

    return 0;

}