#include <stdio.h>

int main(void){
    int qtdNumeros, n, maior, qtdMaior = 0;


    printf("Informe a quantidade de numeros a serem lidos: ");
    scanf("%d", &qtdNumeros);


    for(int i = 0; i < qtdNumeros; i++){

        printf("Informe o numero %d: ", i+1);
        scanf("%d", &n);

        if( i == 0){
            maior = n;
            qtdMaior++;
        }
        else{
            if(n > maior){
                qtdMaior = 0;
                maior = n;
                qtdMaior++;
            }else{
                if( n == maior)
                qtdMaior++;
            }
        }

    }

    printf("Maior valor: %d\n", maior);
    printf("Qtd de leituras: %d", qtdMaior);

    return 0;

}