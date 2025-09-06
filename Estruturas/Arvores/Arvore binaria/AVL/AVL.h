/*
 * avl.h
 *
 * Definições básicas de uma árvore AVL.
 *
 * Uma AVL é um tipo especial de árvore binária de busca que mantém
 * o balanceamento automático após cada inserção/remoção.
 *
 * Balanceamento:
 *  - A árvore (ou qualquer subárvore) está balanceada se o fator de
 *    balanceamento (alturaEsquerda – alturaDireita) ∈ { -1, 0, 1 }.
 *  - Qualquer valor fora desse intervalo indica desbalanceamento.
 *
 * Algoritmos de rotação:
 *  - Balanceamento simples: quando os sinais do fator de balanceamento
 *    do nó raiz e da subárvore “pesada”, isto é, a subárvore de maior altura são iguais (casos LL ou RR).
 *  - Balanceamento duplo: quando os sinais são opostos (casos LR ou RL). Não torna a árvore balanceada de fato, apenas torna os sinais dos fatores de balanceamento iguais,
 *    preparando o nó para a rotação simples.
 * 
 * 
 *    Autor: João Victor Oliveira
 *    data: 06/09/2025
 * 
 */

 // DEFINIÇÃO DA ESTRUTURA/FUNÇÕES
 typedef struct arvore{
    struct arvore *esquerda; // apontamento para filho-esquerdo
    int info; // atributo de conteúdo
    struct arvore *direita; // apontamento para filho-direito
 } Arvore;

 // Protótipo de função para criar uma árvore vazia. Parâmetros: void. Retorno: ponteiro de árvore
 Arvore* criar_arvore(void);
 // Protótipo de função para inserir de maneira ordenada em uma arvore. Parâmetros: ponteiro de arvore, int. Retorno: ponteiro de árvore
 Arvore* inserir_arvore(Arvore*, int);
 // Protótipo de função para verificiar se a árvore está vazia. Parâmetros: ponteiro de arvore. Retorno: int
 int arvore_vazia(Arvore*);
 // Protótipo de função para exibir em ordem pré-fixada em uma arvore binária. Parâmetro: ponteiro de arvore. Retorno: void
 void exibir_prefix(Arvore*);
 // Protótipo de função para exibir em ordem infixada em uma árvore binária. Parâmetro: ponteiro de árvore. Retorno: void
 void exibir_infix(Arvore*);
 // Protótipo de função para exibir em ordem pós-fixada em uma árvore binária. Parâmetro: ponteiro de árvore. Retorno: void
 void exibir_posfix(Arvore*);
 // Protótipo de função para buscar elemento em uma árvore binária. Parâmetro: ponteiro de árvore, inteiro. Retorno: inteiro
 int busca_elemento(Arvore*, int);
 // Protótipo de função para liberar uma arvore binária em memória. Parâmetro: ponteiro de árvore. Retorno: ponteiro de árvore
 Arvore* libera_arvore(Arvore*);
 // Protótipo de função para calcular a altura máxima de uma árvore binária. Parâmetro: ponteiro de árvore. Retorno: inteiro
 int altura_arvore(Arvore*);
 // Protótipo de função para calcular o número de nós de uma árvore binária. Parâmetro: ponteiro de árvore. Retorno: inteiro
 int nos_arvore(Arvore*);
 // Protótipo de função para calcular fator de balanceamento de uma árvore binária. Parâmetro: ponteiro de árvore. Retorno: inteiro
 int fator_balanceamento(Arvore*);
// Protótipo de função para realizar rotação à esquerda em uma árvore binária. Parâmetro: ponteiro de árvore. Retorno: ponteiro de árvore
Arvore* rotacao_esquerda(Arvore*);
// Protótipo de função para realizar rotação à direita em uma árvore binária. Parâmetro: ponteiro de árvore. Retorno: ponteiro de árvore
Arvore* rotacao_direita(Arvore*);
// Protótipo da função para realizar o balanceamento da árvore, garantindo a característica da AVL. Parâmetro: Ponteiro de árvore, int. Retorno: pontiero de árvore
Arvore* balancear_arvore(Arvore*, int);