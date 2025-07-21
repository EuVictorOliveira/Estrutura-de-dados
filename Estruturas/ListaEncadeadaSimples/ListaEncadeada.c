/*
    Arquivo relacionado às implementações das funções para manipulação de lista encadeada.
    data: 19-07-2025.




    Autor: João Victor Oliveira.

*/
// CABEÇALHO
#include <stdio.h>
#include <stdlib.h>
#include "ListaEncadeada.h"

// Implementa criar_lista()
void cria_lista(No **lp){
    *lp = NULL; /*Para criar a lista. O ponteiro que a representa deve receber valor NULL. Como o parâmetro de cria_lista é ponteiro de ponteiro para struct nó 
                  Atribuimos NULL ao conteudo apontado por lp*/
    
    if(*lp){ // Verifica se houve erro ao criar lista.
        printf("Erro ao criar lista.\n");
        exit(1);
    }   
    printf("Lista criada com sucesso.\n");
    return;
}
// Implementa inserir_inicio()
void inserir_inicio(No **lp, int n){
    No *novo; // Cria varíavel do tipo ponteiro para nó. Representa o novo nó da lista.
    // Aloca dinamicamente o espaço necessário para o novo nó.
    novo = (No *) malloc(sizeof(No));
    if(!novo){ // Verifica se memória foi alocada corretamente e imprime erro caso não
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    novo->info = n; // Conteúdo do nó recebe n.
    novo->proximo = *lp; // novo agora aponta para o conteúdo de lp, isto é, o início da lista.
    *lp = novo; // o novo conteúdo de lp agora é novo.

    printf("Elemento inserido com sucesso.\n");
    return;

}
// Implementa inserir_meio().
void inserir_meio(No **lp, int n, int valorAnterior){
    No *novo; // Cria variável novo do tipo ponteiro para Nó. Representa o novo nó.
    // Aloca dinamicamente espaço para novo nó.
    novo = (No *) malloc(sizeof(No));
    if(!novo){// Verifica se alocação foi bem-sucedida e imprime erro caso não
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    novo->info = n; // Conteúdo do novo nó recebe o valor n.
    // Ainda não podemos atribui algum valor a novo->proximo, antes é necessário algumas verificação.
    if(*lp == NULL){ // verifica se a lita está vazia. Nesse caso novo é o primeiro elemento.
        novo->proximo = NULL; // novo aponta agora para NULL, já que será o primeiro/ último elemento.
        *lp = novo;// conteúdo de lp agora aponta para novo.
        
        printf("Elemento inserido com sucesso.\n");
        return;
    }else{
        No *p; // Cria variável auxiliar do tipo nó para percorrer a lista.
        for(p = *lp; p->info != valorAnterior && p->proximo != NULL; p = p->proximo); // percorrer a lista até encontrar o valor que será anterior ao novo nó ou até chegar ao fim da lista.
        // FAZER NESTA ORDEM, DO CONTRÁRIO LISTA SERÁ PERDIDA.
        novo->proximo = p->proximo; // Novo próximo agora recebe o ponteiro para o próximo elemento guardado em p-> proximo.
        p->proximo = novo; // p->proximo agora aponta para novo.
    }

    printf("Elemento inserido com sucesso.\n");
    return;

}
// Implementa inserir_fim()
void inserir_fim(No **lp, int n){
    No *novo; // Cria variável novo do tipo ponteiro para nó. Representa o novo nó a ser inserido.
    // Aloca memória dinamicamente para o novo nó.
    novo = (No *) malloc(sizeof(No));
    if(!novo){ // Verifica se a alocação foi bem sucedida. Imprime mensagem de erro caso não.
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    novo->info = n; // Informação de novo recebe n.
    novo->proximo = NULL; // como proximo será o último elemento, já podemos dizer que ele aponta para NULL.
    // Verifica se a lista está inicialmente vazia.
    if(*lp == NULL){
        *lp = novo; // agora o conteúdo de lp é novo.

        printf("Elemento inserido com sucesso.\n");
        return;
    }else{
        No *p; // Cria variável auxiliar
        for(p = *lp; p->proximo != NULL; p = p->proximo); // Percorre lista até o final com a auxiliar
        p->proximo = novo; // fim da lista recebe novo.

    }
    printf("Elemento inserido com sucesso.\n");
    return;

}
// Implementa remover_inicio()
void remover_inicio(No **lp){
    No* p; // Cria variável auxiliar do tipo ponteiro para nó.
    // Caso a lista já esteja vazia.
    if(*lp == NULL){
        printf("Lista vazia.\n");
        return;
    }else{
        p = *lp; // auxiliar recebe o conteúdo do início da lista.
        *lp = p->proximo; // inicio da lista agora aponta para o segundo elemento,
        
        free(p); // A memória alocada dinamicamente é liberada.
    }
    printf("Elemento removido com sucesso.\n");
    return;
}
// Implementa remover_meio()
void remover_meio(No **lp, int valor){
    No *p; // Cria ponteiro para nó;
    // Verifica se a lista está vazia.
    if(*lp == NULL){
        printf("Lista vazia.\n");
        return;
    }
    p = *lp; // atribui o conteúdo de lp a p.
    if(p->proximo == NULL){ // Caso de lista unitária.
        *lp = NULL; // lista agora é vazia.
        free(p);
        printf("Elemento removido.\n");
        return;
    }
    No *sai; // cria variável auxiliar que será retirada.
    for(sai = p->proximo; sai->info != valor && sai->proximo != NULL; p = sai, sai = sai->proximo); // percorre lista até achar valor ou chegar no vetor nulo.
    // Caso elemento não tenha sido encontrado.
    if(sai->proximo == NULL){
        printf("Elemento nao encontrado.\n");
        return;
    }
    p->proximo = sai->proximo; // p agora aponta para onde sai aponta
    free(sai); // libera memória de sai.

    printf("Elemento removido com sucesso.\n");
    return ;

}
// Implementa remover_fim()
void remover_fim(No **lp){
    No *p; // Cria variável auxiliar do tipo ponteiro para nó.
    // Caso a lista já esteja vazia.
    if(*lp == NULL){
        printf("Lista vazia.\n");
        return;
    } 
    p = *lp; // auxiliar recebe o conteúdo de lp.
    // Caso a lista tenha apenas um elemento.
    if(p->proximo == NULL){
        *lp = NULL; // agora o conteúdo de lp é NULL, indicando lista vazia.
        free(p);
        printf("Elemento removido.\n");
        return;
    }
    // Caso a lista tenha mais de um elemento.
    No *sai; // Variável auxiliar para elemento que será removido.
    for(sai = p->proximo; sai->proximo != NULL; p = sai, sai = sai->proximo); // percorre a lista até que sai seja ultimo elemento e p seja o penúltimo.
    p->proximo = NULL; // P é o penúltimo elemento que se tornará o último. Atribuimos NULL ao ponteiro para onde p aponta.
    
    free(sai); // Libera último elemento.
    printf("Elemento removido com sucesso.\n");
    return;
}

// Implementa exibir_lista()
void exibir_lista(No *l){
    No *p; // cria variáivel auxíliar.

    if(!l){
        printf("Lista vazia.\n");
        return;
    }

    printf("Lista: "); 
    for(p = l; p != NULL; p = p->proximo) // Percorre lista até que seja NULL, que representa o último nó da lista.
        printf("%d ", p->info); // Imprime o conteúdo do nó atual.

    printf("\n");
    return;
}
// Implementa esvaziar_lista()
void esvaziar_lista(No **lp){
    No *p;// cria variável auxiliar 

    // Enquanto o conteúdo de lp for não nulo.
    while(*lp){
        p = *lp; // atribui conteúdo de lp a p.
        *lp = p->proximo; // atribui ponteiro para o proximo nó ao conteúdo de lp

        free(p); // Libera memório do conteúdo do lp que estava em p.
    }

    *lp = NULL; // torna a lista vazia.
    printf("Lista esvaziada com sucesso.\n"); // Printa mensagem de sucesso.

    return;

}
// Implementa concatenar_listas
void concatenar_listas(No **inicio, No **final){
    No *p; 

    for(p = *inicio; p->proximo != NULL; p = p->proximo);
    p->proximo = *final;
    


}

