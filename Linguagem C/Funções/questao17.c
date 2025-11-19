#include <stdio.h>

int SomaIntervalo(int n1, int n2){
    int soma = 0;

    for(int i = ++n1; i < n2; i++){
        soma += i;
    }

    return soma;

}



int main(void){
    int intervaloInicio, intervaloFinal;

    printf("Digite o numero inicial: ");
    scanf("%d", &intervaloInicio);

    printf("Digite o numero final: ");
    scanf("%d", &intervaloFinal);

    int resultado = SomaIntervalo(intervaloInicio, intervaloFinal);

    printf("Resultado = %d\n", resultado);

    return 0;

}