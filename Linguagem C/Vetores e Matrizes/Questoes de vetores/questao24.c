#include <stdio.h>

int main(void){
    int aluno[10], posicaoMaior, posicaoMenor;
    double altura[10], maior, menor;


    for(int i = 0; i < 10; i++){
        printf("Informe o numero do aluno %d: ", i+1);
        scanf("%d", &aluno[i]);

        printf("Informe a altura(m) do aluno %d: ", i+1);
        scanf("%lf", &altura[i]);

    }

    maior = menor = altura[0];

    for(int i = 1; i < 10; i++){

        if(altura[i] > maior){
            maior = altura[i];
            posicaoMaior = i;
        }

        if(altura[i] < menor){
            menor = altura[i];
            posicaoMenor = i;
        }

    }

    printf("N. aluno mais alto: %d\n", aluno[posicaoMaior]);
    printf("Altura aluno mais alto: %.2lf\n", maior);

    printf("N. aluno mais baixo: %d\n", aluno[posicaoMenor]);
    printf("Altura aluno mais baixo: %.2lf\n", menor);



    return 0;
}