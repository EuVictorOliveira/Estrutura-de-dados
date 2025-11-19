#include <stdio.h>

int main(void){
    int n, i = 1, contador = 0, acumulado = 1;


    printf("Informe o valor de n: ");
    scanf("%d", &n);


        for(i = 1; i <= n; i++){
            for(int j = 1; ; j++){
                printf("%d ", acumulado);
                acumulado++;
                contador++;

                if(contador == i){
                    printf("\n");
                    contador = 0;
                    break;
                }

            }

        }

    return 0;
}