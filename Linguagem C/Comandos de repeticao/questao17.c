#include <stdio.h>

int main(void){
    int N, soma = 0;

    printf("Informe um valor inteiro: ");
    scanf("%d", &N);

    for(int i = 0; i <= N; i++){
        soma += i;
    }

    printf("Soma de 0 ate %d = %d\n", N, soma);

    return 0;

}