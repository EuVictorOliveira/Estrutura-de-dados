/*
    Arquivo referente à mudularização das funções de manipulação
    de listas circulares com vetor.

    Autor: João Victor Oliveira.
    Data: 18-07-2025

 */
#define MAX 10

// Definição da estrutura
typedef struct listaCircular{
    int inicio;
    int vetor[MAX];
    int fim;
} ListaCircular;

// PROTÓTIPOS DAS FUNÇÕES

// Função para criação de lista. Parâmetros: ponteiro para struct listaEstática. Retorno genérico.
void cria_lista(ListaCircular *l);
// Função para inserçõo de elemento no fim da lista. Parâmetros: ponteiro para struct ListaEstatica e inteiro n a ser inserido. Retorno genérico.
void inserir_fim(ListaCircular *l, int n);
// Função para inserção de elemento no início da lista. Parâmetros: ponteiro para struct listaEstatica e inteiro n a ser inserido. Retorno genérico.
void inserir_inicio(ListaCircular *l, int n);
// Função para inserção de elemento no meio da lista. Parâmetros: ponteiro para struct listaEstática, inteiro posição que indica a posição e inteiro n a ser inserido. Retorno genérico.
void inserir_meio(ListaCircular *l, int posicao, int n);
// Função para limpar a lista. Pararâmetros: ponteiro para struct listaEstatica.
void limpar_lista(ListaCircular *l);
// Função para verificar se a lista está cheia. Parâmetros: ponteiro para struct listaEstatica. Retorno de tipo inteiro.
int lista_cheia(ListaCircular *l);
// Função para verificar se a lsita está vazia. Parâmetros: lista estática. Retorno genérico.
int lista_vazia(ListaCircular *l);
// Função para exibir elementos da lista. Parâmetros: lista estática. Retorno genérico.
void exibir_lista(ListaCircular l);
// Função para remover elemento do final da lista. Parâmetros: ponteiro para struct listaEstatica. Retorno genérico.
void remove_final(ListaCircular *l);
// Função para remover elemento do inicio do início da lista. Parâmetros: ponteiro para struct listaEstatica. Retorno genérico.
void remove_inicio(ListaCircular *l);
// Função para remover elemento do meio do vetor. Parâmetros: ponteiro para struct listaEstática, inteiro posição que indica a posição do elemento a ser removido. Retorno genérico.
void remove_meio(ListaCircular *l, int posicao);