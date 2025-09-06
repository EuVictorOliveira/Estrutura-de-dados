/*
    Arquivo relacionado à moduralização do TAD árvore binária.
    Autor: João Victor Oliveira

    data da última modificação: 01/09/2025

    Nota: uma árvore binária é aquele onde cada nó tem no máximo dois nós filhos. Na árvore binária em questão, o filho com valor maior que o do pai é o filho direito e o filho com valor
    menor que o do pai é o filho esquerdo.

*/
// TIPO ESTRUTURADO:
typedef struct arvore{
    int info;
    struct arvore* esquerda;
    struct arvore* direita;
} Arvore;

// PROTÓTIPOS DAS FUNÇÕES

// Função para criar arvore vazia. Tem como parâmetro void e retorno vazio
void criar_arvore(Arvore**);
// Função para inserir novo nó na árvore. Tem como parâmetros a informação a ponteiro para ponteiro de arvore e valor do novo nó. Seu retorno é vazio
Arvore* inserir_arvore(Arvore*, int);
// Função para verifica se a arvore está vazia. Tem como parâmetro o ponteiro para árvore. Seu retorno é do tipo inteiro.
int arvore_vazia(Arvore*);
// Função para percorrer os nós da arvore, exibindo seus conteúdos de maneira pré-fixada. Tem como parametro ponteiro para arvore. Seu retorno é do tipo void
void exibir_arvore_prefix(Arvore*);
// Função para percorrer os nós da árvore, exibindo seus conteúdos de maneira infixada. Tem como parâmetro ponteiro para arvore. Seu retorno é do tipo void
void exibir_arvore_infix(Arvore*);
// Função para percorrer os nós da árvore, exibindo seus conteúdos de maneira pós-fixada. Tem como parâmetro ponteiro para árvore. Seu retorno é do tipo void
void exibir_arvore_posfix(Arvore*);
// Função para liberar memória alocada para arvore. Tem como parametro ponteiro para árvore. Seu retorno é vazia.
void liberar_arvore(Arvore**);
// Função para verificar se árvore possui determinado valor. Tem como parâmetros ponteiro de arvore e int valor referente ao valor a ser buscado. Seu retorno é do tipo inteiro
int buscar_elemento(Arvore*, int);
// Função para verificar a altura de uma árvore e retornar o valor correspondente. Tem como parâmetro ponteiro de arvore e retorno inteiro
int altura_arvore(Arvore*);
// Função para verificar a quantidade de nós de uma árvore binária e retornar valor correspondente. Tem como parâmetro ponteiro de árvore e retorna inteiro
int nos_arvore(Arvore*);