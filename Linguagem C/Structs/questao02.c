/* Código referente ao exercício 01 da lista de alocação dinâmica(10) 
   Dia 12-07-2025

    Enunciado: Implemente um programa que leia o nome, a idade e o endereco de uma pessoa e armazene os dados em uma estrutura.
     
   Autor: João Victor Oliveira
*/
#include <stdio.h>

//tipos
struct pessoa{
    char nome[15];
    char idade;
    char endereco[200];
};

int main(void){
    struct pessoa p;

    printf("Informe o nome: ");
    scanf("%s", p.nome);

    printf("Informe a idade: ");
    scanf("%c", &p.idade);

    printf("Informe o endereco: ");
    gets(p.endereco);


    return 0;
    
}