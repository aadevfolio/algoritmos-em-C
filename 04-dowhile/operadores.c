#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao;
    float num1, num2;
    char continuar;

    do {
        system("clear\n");
        puts("1 - Somar");
        puts("2 - Subtrair");
        puts("3 - Multiplicar");
        puts("4 - Dividir");
        scanf("%d", &opcao);
        
        switch (opcao){
            case 1:
                printf("Numero 1: ");
                scanf("%f", &num1);
                printf("Numero 2: ");
                scanf("%f", &num2);
                printf ("%.2f\n", num1 + num2);
            break;
            case 2: 
                printf("Numero 1: ");
                scanf("%f", &num1);
                printf("Numero 2: ");
                scanf("%f", &num2);
                printf("%.2f\n", num1 - num2);
            break;
            case 3:
                printf("Numero 1: ");
                scanf("%f", &num1);
                printf("Numero 2: ");
                scanf("%f", &num2);
                printf("%.2f\n", num1 * num2);
            break;
            case 4:
                printf("Numero 1: ");
                scanf("%f", &num1);
                printf("Numero 2: ");
                scanf("%f", &num2);
                printf("%.2f\n", num1 / num2);
            break;
            default:
                printf("Comando invalido!\n");
            break;
        }
        getchar();
        printf("Quer continuar [S / N]: ");
        scanf("%c", &continuar);
    } while ((opcao == 'N') || (opcao == 'N'));
    
    return 0;
}
