/*
    Arquivo referente à mudularização das funções de manipulação
    de listas ordenadas com vetor.

    Autor: João Victor Oliveira.
    Data: 18-07-2025

 */

// Definição da estrutura
typedef struct listaEstatisca{
    int vetor[10];
    int ctr;
} Lista;

// PROTÓTIPOS DAS FUNÇÕES

// Função para criação de lista. Parâmetros: ponteiro para struct listaEstática. Retorno genérico.
void cria_lista(Lista *l);
// Função para inserçõo de elemento no fim da lista. Parâmetros: ponteiro para struct ListaEstatica e inteiro n a ser inserido. Retorno genérico.
void insere_final(Lista *l, int n);
// Função para inserção de elementos na lista de maneira ordenada. Faz uso das demais funções de inserção. Parâmetros: ponteiro para struct listaEstatica e inteiro n. Retorno genérico
void inserir(Lista *l, int n);
// Função para inserção de elemento no início da lista. Parâmetros: ponteiro para struct listaEstatica e inteiro n a ser inserido. Retorno genérico.
void insere_inicio(Lista *l, int n);
// Função para inserção de elemento no meio da lista. Parâmetros: ponteiro para struct listaEstática, inteiro posição que indica a posição e inteiro n a ser inserido. Retorno genérico.
void insere_meio(Lista *l, int posicao, int n);
// Função para limpar a lista. Pararâmetros: ponteiro para struct listaEstatica.
void limpar_lista(Lista *l);
// Função para verificar se a lista está cheia. Parâmetros: ponteiro para struct listaEstatica. Retorno de tipo inteiro.
int lista_cheia(Lista *l);
// Função para verificar se a lsita está vazia. Parâmetros: lista estática. Retorno genérico.
int lista_vazia(Lista *l);
// Função para exibir elementos da lista. Parâmetros: lista estática. Retorno genérico.
void exibir_lista(Lista l);
// Função para remover elemento do final da lista. Parâmetros: ponteiro para struct listaEstatica. Retorno genérico.
void remove_final(Lista *l);
// Função para remover elemento do inicio do início da lista. Parâmetros: ponteiro para struct listaEstatica. Retorno genérico.
void remove_inicio(Lista *l);
// Função para remover elemento do meio do vetor. Parâmetros: ponteiro para struct listaEstática, inteiro posição que indica a posição do elemento a ser removido. Retorno genérico.
void remove_meio(Lista *l, int valor);
