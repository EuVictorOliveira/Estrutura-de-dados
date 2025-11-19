/* Código referente ao exercício 11 da lista de alocação dinâmica(10) 
   Dia 05-07-2025

    Enunciado:  Crie um programa que declare uma estrutura (registro) para o cadastro de alunos.

                (a) Deverao ser armazenados, para cada aluno: matrıcula, nome (apenas um) e
                    ano de nascimento.

                (b) Ao inıcio do programa, o usuario devera informar o numero de alunos que serao
                    armazenados

                (c) O programa devera alocar dinamicamente a quantidade necessaria de memoria 
                    para armazenar os registros dos alunos.

                (d) O programa devera pedir ao usuario que entre com as informacoes dos alunos. 

                (e) Ao final, mostrar os dados armazenados e liberar a memoria alocada.
     
   Autor: João Victor Oliveira
*/
#include <stdio.h>
#include <stdlib.h>

// Cria estrutura
struct Aluno{
    int matricula;
    char nome[15];
    int anoNascimento;
};

int main(void){
    int qtdAlunos;
    struct Aluno* alunos;

    printf("Informe a qtd de alunos: ");
    scanf("%d", &qtdAlunos);

    // Aloca memórica dinamicamente
    alunos = (struct Aluno*) malloc(qtdAlunos*sizeof(struct Aluno));
    if(!alunos){
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    // Etapa de leitura de dados
    for(int i = 0; i < qtdAlunos; i++){
        printf("====DADOS ALUNO %d====\n", i+1);

        printf("Informe o nome do aluno: ");
        scanf("%s", alunos[i].nome);

        printf("Informe a matricula do aluno: ");
        scanf("%d", &alunos[i].matricula);

        printf("Informe o aluno de nascimento do aluno: ");
        scanf("%d", &alunos[i].anoNascimento);

    }

    // Etapa de impressão dos dados lidos
    printf("=================DADOS==================\n");
    for(int i = 0; i < qtdAlunos; i++){
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Ano de nascimento: %d\n", alunos[i].anoNascimento);
        printf("--------------------------------------------------------\n");
    }

    // Libere memoria alocada
    free(alunos);

    return 0;

}