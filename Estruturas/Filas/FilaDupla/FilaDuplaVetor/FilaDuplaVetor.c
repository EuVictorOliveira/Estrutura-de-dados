/* 
    Arquivo relacionado às implementações das funções de fila utilizando vetor.
    data: 16-08-2025

    Autor: João Victor Oliveira
*/
// CABEÇALHO
#include <stdio.h>
#include <stdlib.h>
#include "FilaDuplaVetor.h"

// IMPLEMENTAÇÕES:

// Implementa cria_fila
void cria_fila(Fila **f){
    // aloca memória para  fila dinamicamente
    *f = (Fila*) malloc(sizeof(Fila));
    if(!(*f)){
        printf("Erro ao criar fila.\n");
        exit(1);
    }
    (*f)->nElementos = 0; // número de elementos da fila recém-criada é 0
    (*f)->ini = 0; // seta início da fila como 0, indicando fila vazia sem nenhum elemento.
    printf("Fila criada com sucesso.\n");
    return;
}
// Implementa inserir_fila_inicio
void inserir_fila_inicio(Fila *f, int n){
    // Primeiro, verifica se a fila não está cheia.
    if(f->nElementos == MAX){
        printf("Fila cheia. Nao eh possivel inserir.\n");
        return;
    }
    f->ini = (f->ini - 1 + MAX) % MAX;
    f->vetor[f->ini] = n;
    f->nElementos++;

    printf("Elemento inserido com sucesso.\n");
}
// Implementa insere_fila_fim().
void inserir_fila_fim(Fila *f, int n){
    // Primeiro, devemos verificar se a fila está cheia
    if(f->nElementos == MAX){
        printf("Fila cheia. Nao eh possivel inserir.\n");
        return;
    }
    int fim; // variável que representa o fim da fila

    fim = (f->ini+f->nElementos) % MAX; // atribui o valar a fim utilizando a circularidade do vetor.
    f->vetor[fim] = n; // atribui conteúdo ao fim
    f->nElementos++; // incrementa o número de elementos

    printf("Elemento inserido com sucesso.\n");
    return;
}
// Implementa remove_fila
int remove_fila_inicio(Fila *f){
    // Verifica se a fila está vazia.
    if(fila_vazia(f)){
        printf("Fila vazia. Nao eh possivel remover\n");
        return -1;
    }
    int auxiliar; // Valor auxiliar que representa elemento que será removido
    auxiliar = f->vetor[f->ini];
    f->ini = (f->ini+1) % MAX; // agora início é o próximo elemento da fila
    f->nElementos--; // decrementa o número de elementos.

    return auxiliar;
}
// Implementa remove_fina_final()
int remove_fila_final(Fila *f){
    // Verifica se a fila esta vazia
    if(fila_vazia(f)){
        printf("Fila vazia. Nao eh possivel remover.\n");
        return -1;
    }
    int fim = (f->ini + f->nElementos) % MAX; // recupera o final da fila.
    int auxiliar; // valor auxiliar que representa elemento que será removido.
    auxiliar = f->vetor[fim];
    f->nElementos--;

    return auxiliar;

}   
// Implementa fila_vazia()
int fila_vazia(Fila *f){
    return (f->nElementos == 0); // apenas retorna se o número de elementos da fila é igual a 0
}
// Implementa exibir_fila()
void exibir_fila(Fila *f){
    // Verifica se a fila está vazia.
    if(fila_vazia(f)){
        printf("Fila vazia.\n");
        return;
    }
    int indice; // variável auxiliar para percorrer exibir elementos

    printf("Fila: ");
    for(int i = 0; i < f->nElementos; i++){
        indice = (f->ini + i) % MAX;
        printf("%d ", f->vetor[indice]);
    }

    printf("\n");
    return;
}
// Implementa libera_fila()
void libera_fila(Fila *f){
    // Verifica se fila existe
    if(f){
        free(f); // Libera memória alocada para fila

        printf("Fila liberada com sucesso.\n"); // imprime mensagem de sucesso.
        return;
    }

    printf("Erro ao liberar fila.\n");
    return;
}