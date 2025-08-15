/*
    Arquivo relacionado ao módulo das funçães para manipulação de lista duplamente encadeada.
    data: 14-08-2025.


    Autor: João Victor Oliveira.

*/
// DEFINIÇÃO DA ESTRUTURA
/*
    A "base" da lista é uma struct "nó" que representa um elemento "completo" da lista.
    Os atributos são a informação/conteúdo daquele ló, o ponteiro que aponta para o elemento anterior e o ponteiro que aponta para o próximo elemento.

    Na lista duplamente encadeada, todo elemento aponta para o anterior e o próximo, a exceção do primeiro, que aponta seu ponteiro-anteior para nulo
    e do último, que aponta seu ponteiro-proximo para um ponteiro nulo(0)

*/

// Definição da estrutura
typedef struct no{
    struct no* anterior; // ponteiro para o elemento anterior.
    int info;
    struct no* proximo; // ponteiro para o próximo elemento.
} No;
 
// Protótipo da função para a criação da lista. Tem como parâmetro um ponteiro para ponteiro de nó. Seu retorno é genérico(void).
void criar_lista(No **lp);
// Protótipo da função para a inserção de elemento no início da lista. Tem como parâmetros um ponteiro para ponteiro de nó e um inteiro n. Seu retorno é genérico(void).
void inserir_inicio(No **lp, int n);
// Protótipo da função para inserção do elemento no meio da lista. Tem como parâmetros um ponteiro para ponteiro de nó, um inteiro n e inteiro do valor anteiro. Se retorno é genérico(void).
void inserir_meio(No **lp, int n, int valorAnterior);
// Protótipo da função para inserção de elemento no fim da lista. Tem como parâmetrs um ponteiro para ponteiro de nó e um inteiro n. Seu retorno é genérico(void).
void inserir_fim(No **lp, int n);
// Protótipo da função para remoção de elemento no inicio da lista. Tem como parametro um ponteiro para ponteiro de nó. Seu retorno é genérico(void).
void remover_inicio(No **lp);
// Protótio da função para remoção de elemento no meio da lista. Tem como parametro um ponteiro para ponteiro de nó e um inteiro n. Seu retorno é genérico(void).
void remover_meio(No **lp, int valor);
// Protótipo da função para remoção de elemento do final da lista. Tem como parâmetro um ponteiro de ponteiro para nó. Seu retorno é genérico(void).
void remover_fim(No **lp);
// Protótipo da função para exibir lista. Tem como parâmetro ponteiro de nó.
void exibir_lista(No *l);
// Protótipo da função para exibir a lista em ordem inversa. Tem como parâmetro ponteiro de nó
void exibir_lista_inverso(No *l);
// Protótipo da função para estaviar lista. Tem como parâmetro ponteiro de ponteiro de nó.
void esvaziar_lista(No *lp);
