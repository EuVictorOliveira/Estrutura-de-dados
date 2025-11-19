#include <stdio.h>

int main(void){
    int vetor[15], vetorCompactado[15];
    int j = 0;

    for(int i = 0; i < 15; i++){

        printf("Informe o valor %d: ", i+1);
        scanf("%d", &vetor[i]);

        if(vetor[i] != 0){
            vetorCompactado[j] = vetor[i];
            j++;
        }
    }

    printf("====VETOR NAO COMPACTADO====\n");
    for(int i = 0; i < 15; i++){
        printf("v[%d] = %d\n",i, vetor[i]);
    }

    printf("====VETOR COMPACTADO====\n");
    for(int i = 0; i < j; i++){
        printf("v[%d] = %d\n",i, vetorCompactado[i]);
    }

    return 0;

}