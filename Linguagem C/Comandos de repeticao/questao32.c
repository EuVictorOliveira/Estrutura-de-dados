#include <stdio.h>
#include <stdlib.h>

int main(void){
    int dado1, dado2, simulacoes;


    printf("Informe a qtd de simulacoes: ");
    scanf("%d", &simulacoes);


    for(int i = 1; i <= simulacoes; i++){
        
        dado1 = (rand() % 6) + 1;
        dado2 = (rand() % 6) + 1;
  
        printf("====SIMULACAO %d====\n", i);
        printf("dado 1 = %d\ndado 2 = %d\n", dado1, dado2);

        if(dado1 > dado2)
            printf("Dado 1 > Dado 2\n");
        else if(dado1 == dado2)
            printf("Dado 1 = Dado 2\n");
        else
            printf("Dado 1 < Dado 2\n");

    }



    return 0;

}