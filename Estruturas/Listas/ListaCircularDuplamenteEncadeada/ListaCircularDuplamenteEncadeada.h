/*
    Arquivo relacionado ao módulo das funçães para manipulação de lista circular duplamente encadeada.
    data: 15-08-2025.


    Autor: João Victor Oliveira.

*/
// DEFINIÇÃO DA ESTRUTURA
/*
    A "base" da lista é uma struct "nó" que representa um elemento "completo" da lista.
    Os atributos são a informação/conteúdo daquele ló e dois ponteiros, um que aponta para o elemento anterior e outro que aponta para o próximo elemento.

    Na lista circular, todo elemento aponta para o próximo, e o último elemento aponta para o primeiro elemento da lista.

*/
typedef struct no{
    struct no* anterior;
    int info; // representa conteúdo do nó
    struct no* proximo; // representa ponteiro para o próximo elemento da lista.
} No;

// PROTÓTIPOS 

// Protótipo de função para criação da lista. Seu parâmetro é um ponteiro de ponteiro para struct no.
void cria_lista(No **lp);
// Protótipo de função para inserção de elemento no início da lista. Seus parâmetros são ponteiro de ponteiro para struct no e int n.
void inserir_inicio(No **lp, int n);
// Protótipo de função para inserção de elemento no meio da lista. Seus parâmetros são ponteiro de ponteiro para struct nó, int n e int valorAnteior.
void inserir_meio(No **lp, int n, int valorAnterior);
// Protótipo de função para inserção no final da lista. Seus parâmetros são ponteiro de ponteiro para struct e int n.
void inserir_fim(No **lp, int n);
// Protótipo de função para remoção de elemento no início da lista. Seus parâmetros são ponteiro de ponteiro para nó.
void remover_inicio(No **lp);
// Protótipo de funçao para remoção de elemento no meio da lista. Seus parâmetros são ponteiro de ponteiro para nó e int valor.
void remover_meio(No **lp, int valor);
// Protótipo de função para remoção de elemento no fim da lista. Seus parâmetros são ponteiro de ponteiro para nó.
void remover_fim(No **lp);
// Protótipo de função para exibir a lista. Seu parâmetro é ponteiro para struct nó.
void exibir_lista(No *l);
// Protótipo de função para exibir Lista na ordem inversa. Seu parâmetro é para struct no e o retorno é do tipo void(genérico).
void exibir_lista_inversa(No *l);
// Protóripo para esvaziar lista. Seu parâmetro é ponteiro de ponteiro para struct nó.
void esvaziar_lista(No **lp);