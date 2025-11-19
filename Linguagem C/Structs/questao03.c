/* Código referente ao exercício 01 da lista de alocação dinâmica(10) 
   Dia 12-07-2025

    Enunciado: Construa uma estrutura aluno com nome, numero de matrıcula e curso. Leia do usuario 
               a informacao de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.

     
   Autor: João Victor Oliveira
*/
#include <stdio.h>

// Tipos
struct aluno{
    char nome[15];
    int matricula;
    char curso[20];
};

int main(void){
    struct aluno alunos[5];

    for(int i = 0; i < 5; i++){
        printf("Informe o nome: ");
        scanf("%s", alunos[i].nome);

        printf("Informe a matricula: ");
        scanf("%d%*c", &alunos[i].matricula);

        printf("Informe o curso: ");
        gets(alunos[i].curso);

    }

    printf("-----INFORMACOES DOS ALUNOS-----\n");
    for(int i = 0; i < 5; i++){
        printf("Nome: %s\nIdade: %d\nCurso: %s\n", alunos[i].nome, alunos[i].matricula, alunos[i].curso);
        printf("-------------------------------------------------------------------------------------------\n");
    }

    return 0;
}