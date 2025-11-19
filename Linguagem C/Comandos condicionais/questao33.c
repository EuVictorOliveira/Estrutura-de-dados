#include <stdio.h>

int main(void){
    double precoAtual, precoNovo;

    printf("Informe o preco atual do produto: ");
    scanf("%lf", &precoAtual);

    if( precoAtual <= 50.0)
        precoNovo = precoAtual + (precoAtual * 0.05);
    else if( precoAtual > 50.0 && precoAtual <= 100.0)
        precoNovo = precoAtual + (precoAtual * 0.1);
    else 
        precoNovo = precoAtual + (precoAtual * 0.15);


    printf("Novo preco: R$ %.2lf\n", precoNovo);

    if(precoNovo <= 80.0)
        printf("Barato\n");
    else if(precoNovo > 80.0 && precoNovo <= 120.0)
        printf("Normal\n");
    else if(precoNovo > 120.0 && precoNovo < 200)
        printf("Caro\n");
    else
        printf("Muito caro\n");



    return 0;
    
}