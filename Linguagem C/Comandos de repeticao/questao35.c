#include <stdio.h>

int main(void){
    int inferior, superior, somaImpares = 0;


    printf("Informe o numero inferior do intervalo: ");
    scanf("%d", &inferior);
    printf("Informe o numero superior do intervalo: ");
    scanf("%d", &superior);


    if(superior < inferior){
        printf("Intervalo de valores invalido.\n");
        return 1;
    }


    for(int i = inferior; i <= superior; i++){

        if( i % 2 != 0)
            somaImpares += i;

    }



    printf("Soma dos impares neste intervalo: %d\n", somaImpares);

    return 0;


}