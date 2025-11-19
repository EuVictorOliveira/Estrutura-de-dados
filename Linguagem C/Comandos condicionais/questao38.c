#include <stdio.h>
#include <stdio.h>

int main(void){
    int dia, mes, ano;


    printf("Informe a data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);


    if(ano <= 2025){
        switch (mes){
            case 1:
                
                if(dia <= 31)
                    printf("Data valida\n");
                else
                    printf("Data invalida\n");

                break;
            case 2: 
            
                if(ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)){
                
                    if(dia <= 29)
                        printf("Data valida\n");
                    else
                        printf("Data invalida\n");
                    
                }else{

                    if(dia <= 28)
                        printf("Data Valida\n");
                    else
                        printf("Data Invalida\n");

                }

                break;
            case 3:

                if(dia <= 31)
                    printf("Data valida\n");
                else
                    printf("Data invalida\n");
            
                break;
            case 4: 
            
                if(dia <= 30)
                    printf("Data valida\n");
                else
                    printf("Data invalida\n");

                break;
            case 5:
                
                if(dia <= 31)
                    printf("Data valida\n");
                else
                    printf("Data invalida\n");

                break;
            case 6:
                
                if(dia <= 30)
                    printf("Data valida\n");
                else
                    printf("Data invalida\n");

                break;
            case 7:
                
                if(dia <= 31)
                    printf("Data valida\n");
                else
                    printf("Data invalida\n");

                break;
            case 8:
            
                if(dia <= 31)
                    printf("Data valida\n");
                else
                    printf("Data invalida\n");

                break;
            case 9:
            
                if(dia <= 30)
                    printf("Data valida\n");
                else
                    printf("Data invalida\n");

                break;
            case 10:
                
                if(dia <= 31)
                    printf("Data valida\n");
                else
                    printf("Data invalida\n");

                break;
            case 11: 
                
                if(dia <= 30)
                    printf("Data valida\n");
                else
                    printf("Data invalida\n");

                break;
            case 12:
                
                if(dia <= 31)
                    printf("Data valida\n");
                else
                    printf("Data invalida\n");

                break;
            default:
                printf("Data Invalida\n");
                break;
        }
    }else
        printf("Data invalida\n");

    return 0;
}