#include <stdio.h>

int main(void){
    int valoresInteiros[10];
    int haIguais = 0;

    for(int i = 0; i < 10; i++){

        printf("Informe o valor %d: ", i+1);
        scanf("%d", &valoresInteiros[i]);


    }

    for(int i = 0; i < 10; i++){
        for(int j = 1; j < 10; j++){
            int ehIgual = 0;

            if(valoresInteiros[i] == valoresInteiros[j] && i != j){
                ehIgual = 1;
                haIguais = 1;
            }
            if(ehIgual){
                printf("valor %d eh igual a valor %d\nValor: %d\n\n", i+1, j+1, valoresInteiros[i]);
            }

        }
    }


    if(haIguais == 0)
        printf("Nao ha valorem repetidos\n");


    return 0;
    
}