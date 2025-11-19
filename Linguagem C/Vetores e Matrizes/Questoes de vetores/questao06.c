#include <stdio.h>

int main(void){
    int numeros[10], maior, menor;

    for( int i = 0; i < 10; i++){
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
    }

    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    return 0;
}