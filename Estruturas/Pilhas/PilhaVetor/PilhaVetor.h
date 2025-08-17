/*
    Arquivo relacionado ao módulo das funçães para manipulação de pilha em vetor.
    data: 14-08-2025.


    Autor: João Victor Oliveira.

*/
// DEFINIÇÃO DA ESTRUTURA
/*
    A "base" da pilha é uma struct "Pilha" que a representa.
    Os atributos são um vetor com a capacidade maxima da pilha e um inteiro ctr que representa o "controle" da pilha.

    Na pilha, o "topo" é chave: só podemos inserir elementos a partir do topo e a remoção só pode ser feita a partir do topo.
    A ideia adotada é LIFO(last in first out). Dessa forma, o último elemento a entrar é o primeiro a sair.

*/
// DEFINIÇÃO DE MACROS E TIPOS:
#define MAX 50 // tamanho máximo da pilha. Caso deseje alterar, altere aqui
// Definição do tipo a ser usado
typedef struct pilha{
    int vetor[MAX];
    int ctr;
} Pilha;

// DEFINIÇÃO DAS FUNÇÕES:
// Protótipo da função para criação da pilha. Seu parâmetro é um ponteiro de pilha e seu retorno é genérico(void).
void cria_pilha(Pilha *p);
// Protótipo da função push() da pilha, que insere elementos em seu topo. Seu parâmetro é um ponteiro de pilha e inteiro n, seu retorno é void(generico).
void push(Pilha *p, int n);
// Protótipo da função pop() da pilha, que remove o elemento que é o topo da pilha. Seu parâmetro é um ponteiro de pilha e seu retorno é um inteiro.
int pop(Pilha *p);
// Protótipo da função top() da pilha, que retorna o topo da pilha. Seu parâmetro é um ponteiro de pilha e seu retorno é um inteiro.
int top(Pilha *p);
// Protótipo da função que verifica se a pilha está vazia. Seu parâmetro é ponteiro de pilha e seu retorno é void(genérico).
int pilha_vazia(Pilha *p);
// Protótipo da função que esvazia a pilha. Seu parâmetro é ponteiro de pilha e seu retorno é void(genérico).
void esvazia_pilha(Pilha *p);