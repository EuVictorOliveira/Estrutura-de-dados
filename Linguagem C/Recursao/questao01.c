#include <stdio.h>

int somaAteN(int n){
    
    if(n == 1)
        return 1;
    else{
        return  n + somaAteN(n - 1);
    }
    
}

int main(void){
    int n;

    printf("Digite o numero: ");
    scanf("%d", &n);

    int soma = somaAteN(n);

    printf("Soma de 1 ate %d: %d\n", n, soma);

    return 0;

}