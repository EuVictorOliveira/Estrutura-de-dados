#include <stdio.h>

int main(void){
    char respostasAlunos[5][10], gabarito[10];


    for(int i = 0; i < 5; i++){

        for(int j = 0; j < 10; j++){

            printf("Digite a resposta %d do aluno %d: ", j+1, i+1);
            scanf("%c%*c", &respostasAlunos[i][j]);

        }

    }

    for(int i = 0; i < 10; i++){

        printf("Digite a o gabarito da questao %d: ", i+1);
        scanf("%c%*c", &gabarito[i]);
           

    }

    for(int i = 0; i < 5; i++){
        int pontuacaoAluno = 0;

        for(int j = 0; j < 10; j++){

            if(respostasAlunos[i][j] == gabarito[j])
                pontuacaoAluno++;

        }

        printf("Pontuacao aluno %d: %d\n", i+1, pontuacaoAluno);
    }

    return 0;

}