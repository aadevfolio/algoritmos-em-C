#include <stdio.h>
#include <stdlib.h>

int main(){
    int c, opcao, num, par, impar;
    char continuar;
    
    do {
        system("clear\n");
        puts ("1 - Quadrado e Cubo");
        puts ("2 - Par e Impar");
        puts ("3 - Sair");
        scanf("%d", &opcao);
       
        switch (opcao){
            case 1:
                printf("Num    Quad    Cubo\n");
                for (c=0; c<=10; c++){
                printf("%d      %d       %d\n", c, c*c, c*c*c);
                }
                getchar();
            break;
            case 2:
                for (c=1; c<=5; c++){
                    printf("Numero: ");
                    scanf("%d", &num);
                    if (num % 2 == 0){
                        par++;
                    } else {
                        impar++;
                    }
                }
                printf("Par: %d e Impar: %d\n", par, impar);
                getchar();
            break;
            case 3:
                printf("Tchau...");
                exit(1);
            break;
            default:
                printf("Comando Invalido!\n");
            break;
        }
        printf("Quer continuar [S/N]: ");
        scanf("%c", &continuar);
       
    }while ((continuar == 'S') || (continuar == 's'));

    return 0;
}
