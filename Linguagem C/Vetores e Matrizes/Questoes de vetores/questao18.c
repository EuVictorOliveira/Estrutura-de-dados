#include <stdio.h>

int main(void){
    int vetor[10], x;
    int qtdMultiplos = 0;

    for(int i = 0; i < 10; i++){
        printf("Informe o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Informe o valor de x: ");
    scanf("%d", &x);

    for(int i = 0; i < 10; i++){
        if(vetor[i] % x == 0){
            printf("%d eh multiplo de %d\n", vetor[i], x);
            qtdMultiplos++;
        }
    }

    printf("\n");
    printf("Qtd de multiplos: %d\n", qtdMultiplos);


    return 0;

}