#include <stdio.h>

int main(void){
    int numeros[8], x, y;

    for( int i = 0; i < 8; i++){
        printf("Informe o valor %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("Informe a posicao X: ");
    scanf("%d", &x);
    
    printf("Informe a posicao Y: ");
    scanf("%d", &y);

    printf("%d + %d = %d\n", numeros[x], numeros[y], numeros[x] + numeros[y]);

    return 0;
}