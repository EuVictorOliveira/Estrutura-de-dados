/* Código referente ao exercício 01 da lista de alocação dinâmica(10) 
   Dia 12-07-2025

    Enunciado: Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
               conter a matrıcula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
               da terceira prova.

               (a) Permita ao usuario entrar com os dados de 5 alunos. 

               (b) Encontre o aluno com maior nota da primeira prova.

               (c) Encontre o aluno com maior media geral. 

               (d) Encontre o aluno com menor media geral.

               (e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
                   aprovacao

     
   Autor: João Victor Oliveira
*/
#include <stdio.h>

// Tipos
struct aluno{
    char nome[15];
    float prova1;
    float prova2;
    float prova3;
    float media;
};

int main(void){
    struct aluno alunos[5];

    for(int i = 0; i < 5; i++){
        printf("Informe o nome do aluno %d: ", i+1);
        scanf("%s", alunos[i].nome);

        printf("Informe a nota da primeira prova do aluno %d: ", i+1);
        scanf("%f", &alunos[i].prova1);

        printf("Informe a nota da segunda prova do aluno %d: ", i+1);
        scanf("%f", &alunos[i].prova2);

        printf("Informe a nota da terceira prova do aluno %d: ", i+1);
        scanf("%f", &alunos[i].prova3);
        
        alunos[i].media = (alunos[i].prova1 + alunos[i].prova2 + alunos[i].prova3) / 3.0;

    }

    float maiorNotaProva1 = alunos[0].prova1;

    for(int i = 1; i < 5; i++){
        if(alunos[i].prova1 > maiorNotaProva1)
            maiorNotaProva1 = alunos[i].prova1;

    }


    return 0;
}