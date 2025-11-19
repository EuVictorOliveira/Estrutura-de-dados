#include <stdio.h>

int main(void){
    int vetor[6], impares[6], pares[6];
    int SomaPares = 0, qtdPares = 0, qtdImpares = 0;

     for(int i = 0; i < 6; i++){

        printf("Informe o valor %d: ", i+1);
        scanf("%d", &vetor[i]);

        if(vetor[i] % 2 == 0){
            pares[qtdPares] = vetor[i];
            SomaPares += vetor[i];
            qtdPares++;
        }else{
            impares[qtdImpares] = vetor[i];
            qtdImpares++;
        }

    }

    printf("Elementos Pares: \n");
    for(int i = 0; i < qtdPares; i++){
        printf("%d\n", pares[i]);
    }

    printf("Soma: %d\n\n", SomaPares);

    printf("Elementos impares: \n");
    for(int i = 0; i < qtdImpares; i++){
        printf("%d\n", impares[i]);
    }

    printf("Quantidade: %d\n", qtdImpares);

    return 0;

}