#include <stdio.h>

int main(void){
    int soma = 0, n;

    for(int i = 0; i < 10; i++){
        printf("informe o valor %d: ", i+1);
        scanf("%d", &n);

        soma += n;

    }

    printf("soma = %d\n", soma);




    return 0;
}