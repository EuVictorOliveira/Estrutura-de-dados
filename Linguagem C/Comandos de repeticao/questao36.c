#include <stdio.h>

int main(void){
    int somaQuadrados = 0, quadradoSoma = 0;


    for(int i = 1; i <= 100; i++){  

        somaQuadrados += (i*i);
        quadradoSoma += i;

    }


    printf("Diferenca = %d", (quadradoSoma*quadradoSoma) - somaQuadrados);






    return 0;
}