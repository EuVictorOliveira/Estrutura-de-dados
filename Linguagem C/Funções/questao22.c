#include <stdio.h>

void ImprimeLinhas(int n){

    for(int i = 1; i <= n; i++){

        for(int j = 0; j < i; j++){
            printf("!");
        }

        printf("\n");

    }
}

int main(void){
    int n;

    printf("Digite o numero de linhas: ");
    scanf("%d", &n);

    ImprimeLinhas(n);

    return 0;

}