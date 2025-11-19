#include <stdio.h>

int main(void){
    int somaMultiplos = 0;

    for(int i = 1; i < 1000; i++){

        if( i % 3 == 0 || i % 5 == 0)
            somaMultiplos += i;

    }

    printf("Soma dos inteiros multiplos de 3 ou multiplos de 5: %d\n", somaMultiplos);

    return 0;

}