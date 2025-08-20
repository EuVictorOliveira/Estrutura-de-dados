/*
    Arquivo relacionado ao módulo das funçães para manipulação de pilha dinamica, implementada usando conceitos de lista.
    data: 14-08-2025.


    Autor: João Victor Oliveira.

*/
// DEFINIÇÃO DA ESTRUTURA
/*
    A "base" da pilha é uma struct "Pilha" que a representa.
    Os atributos são um inteiro info, que guarda o conteúdo do elemento e um ponteiro para o próximo elemento. É análogo à estrutura de lista
    com encadeamento simples.

    Na pilha, o "topo" é chave: só podemos inserir elementos a partir do topo e a remoção só pode ser feita a partir do topo.
    A ideia adotada é LIFO(last in first out). Dessa forma, o último elemento a entrar é o primeiro a sair.

*/
// DEFINIÇÃO DE TIPOS:
// Definição do tipo a ser usado
typedef struct no{
    int info;
    struct no* proximo;
} No;
// Definição do tipo pilha
typedef struct pilha{
    No *topo;
} Pilha;

// DEFINIÇÃO DAS FUNÇÕES:
// Protótipo da função para criação da pilha. Seu parâmetro é um ponteiro de ponteiro para nó e seu retorno é genérico(void).
void cria_pilha(Pilha**);
// Protótipo da função push() da pilha, que insere elementos em seu topo. Seu parâmetro é um ponteiro de ponteiro para nó e inteiro n, seu retorno é void(generico).
void push(Pilha*, int);
// Protótipo da função pop() da pilha, que remove o elemento que é o topo da pilha. Seu parâmetro é um ponteiro de ponteiro de ponteiro para nó e seu retorno é do tipo ponteiro para No*.
int pop(Pilha*);
// Protótipo da função top() da pilha, que retorna o topo da pilha. Seu parâmetro é um ponteiro de ponteiro para nó e seu retorno é um ponteiro para Nó.
int top(Pilha*);
// Protótipo da função que verifica se a pilha está vazia. Seu parâmetro é ponteiro de ponteiro para nó e seu retorno é void(genérico).
int pilha_vazia(Pilha*);
// Protótipo da função que esvazia a pilha. Seu parâmetro é ponteiro de ponteiro para nó e seu retorno é void(genérico).
void libera_pilha(Pilha*);
// Protótipo da função para exibir a pilha utilizando recursão
void exibir_pilha(Pilha*);
// protótipo da função para exibir os nós
void exibir_no(No*);