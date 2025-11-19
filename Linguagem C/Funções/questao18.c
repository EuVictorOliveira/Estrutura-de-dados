#include <stdio.h>

int Exponenciacao(int base, int expoente){
    int produto = 1;

    if( base == 1){
        return 1;
    }else{
        while(expoente--)
            produto *= base;
    }

    return produto; 

}

int main(void){
    int x, z;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de z: ");
    scanf("%d", &z);

    int resultado = Exponenciacao(x, z);

    printf("%d^%d = %d\n", x, z, resultado);
        
    return 0;

}