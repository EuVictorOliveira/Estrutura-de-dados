#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n = rand() % 1000, palpite, qtdTentativas = 0;

    while(1){

        printf("De um palpite: ");
        scanf("%d", &palpite);

        if(palpite > n){
            printf("Maior\n");
            qtdTentativas++;
            continue;
        }

        if(palpite < n){
            printf("Menor\n");
            qtdTentativas++;
            continue;
        }


        if(palpite == n){
            printf("Parabens, voce acertou.\n");
            printf("Qtd de tentativas: %d", ++qtdTentativas);
            break;
        }



    }


    return 0;

}