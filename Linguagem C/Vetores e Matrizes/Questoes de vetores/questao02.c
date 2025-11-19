#include <stdio.h>

int main(void){ 
    int inteiros[6], i;

    for(i = 0; i < 6; i++){
        printf("Informe o valor %d: ", i+1);
        scanf("%d", &inteiros[i]);
    }

    printf("----LISTA DE VALORES LIDOS----\n");
    for(i = 0; i < 6; i++){
        printf("A[%d] = %d\n", i, inteiros[i]);
    }





    return 0;

}