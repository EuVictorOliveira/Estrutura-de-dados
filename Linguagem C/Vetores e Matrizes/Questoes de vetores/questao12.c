#include <stdio.h>

int main(void){
    int numeros[5], maior, menor, soma = 0;

    for( int i = 0; i < 5; i++){
        printf("Informe o valor %d: ", i+1);
        scanf("%d", &numeros[i]);

        if( i == 0 )
            menor = maior = numeros[i];
        else{

            if(numeros[i] > maior)
                maior = numeros[i];

            if(numeros[i] < menor)
                menor = numeros[i];
        }

        soma += numeros[i];
    }

    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);
    printf("Media dos valores: %.2lf\n", (double)soma/ 5.0);



    return 0;
}