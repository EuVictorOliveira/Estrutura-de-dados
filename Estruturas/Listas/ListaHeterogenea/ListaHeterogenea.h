/*
    Arquivo referente à modularização das funções relacionadas à monipulação de listas heterogêneas.
    Data: 18-08-2025

    Autor: João Victor Oliveira.

    Nota: uma lista heterogênea é uma lista onde estrutura nó possui 3 atributos:
                    
                        - Identificador de tipo
                        - Ponteiro para informação
                        - Ponteiro para o próximo nó

        O identificador de tipo é importante pois, ao utilizarmos lista heterogênea, o conceito de ponteiro de tipo genérico(void*) é aplicado.
        A grande vantagem do uso desse tipo ponteiro reside no fato de que, graças a ele, podemos criar uma lista com diferentes tipos de informações.
        Contudo, não é possível acessar a informação com esse tipo de ponteiro, haja vista que a máquina é incapaz de saber o espaço alocado em memória por meio dele.

        A implementação abaixo guarda 3 tipos de informações, sendo todas figuras geométricas: retângulo, triângulo e circunferência. Foram criados tipos estruturados
        diferentes para cada tipo, bem como funções para as respectivas alocações dinâmicas

    Nota 2: essa é a abordagem mais comum de lista heterogênea, a segunda abordagem é bastante custosa computacionalmente e são raras as aplicações.

*/
// DEFINIÇÕES DE TIPOS MACROS:

#define RET 1 // macro para identificador de tipo retângulo
#define TRI 2 // macro para identificador de tipo triângulo
#define CIR 3 // macro para identificador de tipo circulo

// Define tipo retangulo
typedef struct retangulo{
    float base;
    float altura;
} Retangulo;
// Define tipo triângulo
typedef struct triangulo{
    float base;
    float altura;
} Triangulo;
// Define tipo circulo
typedef struct circulo{
    float raio;
} Circulo;
// Define estrutura básica da lista
typedef struct no{
    int identificador; // identificador de tipo da informação
    void *info; // ponteiro de tipo genérico que aponta para informação
    struct no *proximo; // ponteiro para o próximo nó da lista
} No;

// PROTÓTIPOS DAS FUNÇÕES

// Funções de criação de lista e alocação de nós:

// Função para criação da lista. Parâmetro: ponteiro de ponteiro para nó retorno genérico(void).
void cria_lista(No **lp);
// Função para alocar nó que aponta para tipo retângulo. Parâmetros: float b e float h. Retorno: ponteiro para nó
No* aloca_retangulo(float b, float h);
// Função para alocar nó que aponta para tipo triangulo. Parâmetros: float b float h. Retorno: ponteiro para nó.
No* aloca_triangulo(float b, float h);
// Função para alocar nó que aponta para tipo circulo. Parâmetro: float r. Retorno: ponteiro para nó
No* aloca_circulo(float r);

// Funções para manipulação da lista:

// Função para inserção de nó no início da lista. Parâmetros: ponteiro para ponteiro de nó, int id. Retorno: genérico(void).
void insere_inicio(No **lp, int id);
// Função para inserção de nó no fim da lista. Parâmetros: ponteiro para ponteiro de nó, int id. Retorno: genérico(void).
void insere_fim(No **lp, int id);
// Função para remoção de nó do inicio da lista. Parâmetros: ponteiro para ponteiro de nó. Retorno: genérico(void).
void remove_inicio(No **lp);
// Função para remoção de nó no fim da lista. Parâmetros: ponteiro para ponteiro de nó. Retorno genérico(void).
void remove_fim(No **lp);
// Função para exibir a lista. Parâmetro: ponteiro de nó. Retorno: genérico(void).
void exibir_lista(No *l);
// Função para esvaziar a lista. Parâmetro: ponteiro de ponteiro. Retorno: genérico(void).
void esvaziar_lista(No **lp);
