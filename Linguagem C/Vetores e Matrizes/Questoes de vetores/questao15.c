#include <stdio.h>

int main(void){
    int valoresInteiros[20];
    int ehIgual;

    for(int i = 0; i < 20; i++){

        printf("Informe o valor %d: ", i+1);
        scanf("%d", &valoresInteiros[i]);


    }

    printf("Elementos nao repetidos: \n");
    for(int i = 0; i < 20; i++){
        for(int j = 1; j < 20; j++){
            ehIgual = 0;

            if(valoresInteiros[i] == valoresInteiros[j] && i != j){
               ehIgual = 1;
               break;
            }
    
        }

        if(!ehIgual)
            printf("%d\n", valoresInteiros[i]);
    }


    return 0;
    
}