#include <stdio.h>

int main(void){
    int inferior, superior, somaPares = 0, multiplicacaoImpares = 1;


    printf("Informe o numero inferior do intervalo: ");
    scanf("%d", &inferior);
    printf("Informe o numero superior do intervalo: ");
    scanf("%d", &superior);


    for(int i = inferior; i <= superior; i++){

        if( i % 2 == 0)
            somaPares += i;
        else
            multiplicacaoImpares *= i;

    }



    printf("Soma dos pares: %d\n", somaPares);
    printf("Multiplicacao dos impares: %d\n", multiplicacaoImpares);




    return 0;

}