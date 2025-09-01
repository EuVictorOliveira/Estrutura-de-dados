/*
    Arquivo relacionado à moduralização do TAD árvore binária.
    Autor: João Victor Oliveira

    data: 29/08/2025

    Nota: uma árvore binária é aquele onde cada nó tem no máximo dois nós filhos. As funções abaixo serão implementadas utilizando 
          O recurso de recursão.

*/
// TIPO ESTRUTURADO:
typedef struct arvore{
    int info; // informação contida no nó
    struct arvore* esquerda; // apontamento para o nó "filho esquerdo"
    struct arvore* direita; // apontamento para o nó "filho direito"
} Arvore;

// PROTÓTIPOS DAS FUNÇÕES

// Função para criar arvore vazia. Tem como parâmetro void e retorno ponteiro para struct arvore
Arvore* cria_arvore_vazia(void);
// Função para criar uma avore não vazia. Tem como parâmetros a informação a ser armazenada e os nós dos filhos esquerdo e direito. Seu retorno é ponteiro para struct avore
Arvore* cria_arvore(int, Arvore*, Arvore*);
// Função para verifica se a arvore está vazia. Tem como parâmetro o ponteiro para árvore. Seu retorno é do tipo inteiro.
int arvore_vazia(Arvore*);
// Função para percorrer os nós da arvore, exibindo seus conteúdos. Tem como parametro ponteiro para arvore. Seu retorno é do tipo void
void exibir_arvore(Arvore*);
// Função para liberar memória alocada para arvore. Tem como parametro ponteiro para árvore. Seu retorno é vazia.
Arvore* libera_arvore(Arvore*);
// Função para verificiar se árvore possui determinado valor. Tem como parâmetros ponteiro de arvore e int valor referente ao valor a ser buscado. Seu retorno é do tipo inteiro
int busca_elemento(Arvore*, int);
// Função para verificar a quantidade de valores pares em uma árvore binária
int um_filho(Arvore *);