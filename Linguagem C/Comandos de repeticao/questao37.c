#include <stdio.h>

int main(void){
    int parte1, parte2, soma;

    printf("Numeros entre 1000 e 9999 que satisfazem a propriedade: \n");
    for(int i = 1000; i <= 9999; i++){

        parte1 = i / 100;
        parte2 = i % 100;

        soma = parte1 + parte2;

        if(i == soma*soma)
            printf("%d\n", i);

    }





    return 0;

}