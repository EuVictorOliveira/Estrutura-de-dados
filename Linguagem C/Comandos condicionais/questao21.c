#include <stdio.h>

int main(){
    int opcao, n1, n2;

    printf("Escolha a opcao:\n");
    printf("1 - Soma de dois numeros.\n");
    printf("2 - Diferenca entre dois numeros (maior pelo menor).\n");
    printf("3 - Produto entre dois numeros.\n");
    printf("4 - Divisao entre dois numeros (o denominador nao pode ser zero).\n");
    printf("Opcao: ");
    scanf("%d", &opcao);


    switch (opcao) {
        case 1:

            printf("Informe o primeiro numero: ");
            scanf("%d", &n1);
            printf("Informe o segundo numero: ");
            scanf("%d", &n2);

            printf("%d + %d = %d\n", n1, n2, n1+n2);

            break;
        
        case 2: 

            printf("Informe o primeiro numero: ");
            scanf("%d", &n1);
            printf("Informe o segundo numero: ");
            scanf("%d", &n2);

            if(n1 < n2){
                int aux = n1;
                n1 = n2;
                n2 = aux;
            }


            printf("%d - %d = %d\n", n1, n2, n1-n2);

            break;
        
        case 3:

            printf("Informe o primeiro numero: ");
            scanf("%d", &n1);
            printf("Informe o segundo numero: ");
            scanf("%d", &n2);

            printf("%d x %d = %d\n", n1, n2, n1*n2);

            break;
        
        case 4: 

            printf("Informe o numerador: ");
            scanf("%d", &n1);
            printf("Informe o denominador: ");
            scanf("%d", &n2);

            if( n2 == 0 ){
                printf("Operacao invalida. Denominador eh zero\n");
                return 1;
            }

            printf("%d / %d = %d\n", n1, n2, n1/ n2);

            break;
            
    
            break;
        
        default:
            printf("Operacao invalida\n");
            break;
    }



    return 0;

}