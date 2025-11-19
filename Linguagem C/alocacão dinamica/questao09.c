/* Código referente ao exercício 09 da lista de alocação dinâmica(10) 
   Dia 05-07-2025

    Enunciado: Faca um programa que leia uma quantidade qualquer de numeros armazenando-os na 
               memoria e pare a leitura quando o usuario entrar um numero negativo. Em seguida, 
               imprima o vetor lido. Use a funcao REALLOC
     
   Autor: João Victor Oliveira
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
   int *p;
   int n;

   // Aloca vetor com um unico elemento inicial e verifica processo
   p = (int *) malloc(sizeof(int));
   if(!p){
      printf("Erro ao alocar memoria.\n");
      return 1;
   }

   int i = 0;
   while(1){

      printf("Informe o valor: ");
      scanf("%d", &n);
      
      // Verifica condição de parada.
      if(n < 0)
         break;

      // Caso n maior que 0, realoca memória para vetor comportar mais um elemento.
      if(i > 0){
         p = (int *) realloc(p, (i+1)*sizeof(int));
         if(!p){
            printf("Erro ao alocar memoria.\n");
            return 1;
         }
      }

      // Atribui valor de n ao final do vetor.
      p[i] = n;
      i++;
   }

   // Percorre vetor criado.
   printf("vetor: ");
   for(int n = 0; n < i; n++){
      printf("%d ", p[n]);
   }


   free(p);

   printf("\n");

   return 0;

}