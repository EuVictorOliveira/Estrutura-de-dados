/* 
    Arquivo relacionado ao módulo das funções de fila utilizando vetor.
    data: 16-08-2025

    Definições importantes:

                            - Fila é uma estrutura de dados regida pela regra FIFO(first in, first out).
                            - A fila implementado com auxilio de lista com encadeamento simples.
                            - São duas estruturas básica: No e Fila
                            - Na fila dupla dinamica, o elemento só ser inserido/removido no final no inicio e final da fila.

    Autor: João Victor Oliveira
*/
// DEFINIÇÕES E ESTRUTURAS:

// Definição das estruturas:
// Define no
typedef struct no{
    struct no* anterior;
    int info;
    struct no* proximo;
} No;

// Define estrutura fila
typedef struct fila{
    No* inicio;
    No* fim;
} Fila;

// DEFINIÇÃO DAS FUNÇÕES;

// Protótipo da função para criação da fila. Seu parâmetro é ponteiro de fila e seu retorno é void(genérico).
void cria_fila(Fila **f);
// Protótipo da função para inserção de elemento na fila(início). Seu parâmetro é ponteiro de fila e seu retorno é void(genérico)
void insere_fila_inicio(Fila *f, int n);
// Protótipo da função para inserção de elemento na fila(final). Seus parâmetros são ponteiro de fila e inteiro n e seu retorno é void(genérico).
void insere_fila_final(Fila *f, int n);
// Protótipo da função para remoção de elemento no fila(início). Seu parâmetro é ponteiro de fila e seu retorno é inteiro.
int remove_fila_inicio(Fila *f);
// Protótipo da função para remoção de elemento no final da fila. Seu parâmetro é ponteiro de fila e seu retorno é inteiro.
int remove_fila_final(Fila *f);
// Protótipo da função para verificar se a fila está vazia. Seu parâmetro é ponteiro de fila e seu retorno é inteiro
int fila_vazia(Fila *f);
// Protótipo da função para exibir a Fila.
void exibir_fila(Fila *f);
// Protótipo da fução para liberar fila. Seu parâmetro é ponteiro de fila e seu retorno é void
void libera_fila(Fila *f);