#include <stdio.h>


int main(void){
    double valores[5];
    int opcao;


    for(int i = 0; i < 5; i++){
        printf("Informe o valor %d: ", i+1);
        scanf("%lf", &valores[i]);
    }

    printf("=====MENU=====\n");
    printf("(1) imprimir na ordem direta\n");
    printf("(2) imprimir na ordem inversa\n");
    printf("Informe uma opcao valida: ");
    scanf("%d",  &opcao);


    switch (opcao){
        case 1:

            for(int i = 0; i < 5; i++){
                printf("%.2lf\n", valores[i]);
            }

            break;
        
        case 2:
            
            for(int i = 4; i >= 0; i--){
                printf("%.2lf\n", valores[i]);
            }

            break;

        default:
            printf("Opcao invalida\n");
            break;
    }


    return 0;
}