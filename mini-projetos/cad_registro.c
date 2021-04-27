#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Assinatura de Funções
void cad_funcio();
void menu();
void left();

// STRUCT CADASTRO 
typedef struct {
    char name [15];
    char sexo;
    int age;
    float wage; 
} cad;

cad person[5];

int main() {

    int i, j, opcao;
    
    printf("Bem Vindo!\n");
    cad_funcio();
    do {
        menu();
        scanf("%d", &opcao);
        system("clear || cls");
        switch(opcao){
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:
                left();
                break;
            default:
                printf("Opcão inválida! Tente novamente\n");
                break;
        }
    } while (opcao != 4);
}
  
// FUNCAO PARA FAZER O CADASTRO DO FUNCIONARIO
void cad_funcio(){
    int i;

    for (i=0; i<=4; i++){
        printf("-----------------\n");
        printf("Dados do funcionário %d\n", (i+1));
        printf("Nome: ");
        getchar();
        scanf("%[^\n]s", person[i].name);

        // validar campo sexo 
        printf("Sexo: ");
        getchar();
        scanf("%c", &person[i].sexo);

        printf("Idade: ");
        scanf("%d", &person[i].age);
        printf("Sálario: ");
        scanf("%f", &person[i].wage);
    }
}

void menu(){
    printf("-----------------\n");
    printf("1 - Relatório Geral\n");
    printf("2 - Relatório Senior\n");
    printf("3 - Buscar Funcionario\n");
    printf("4 - Sair do programa\n");
}

void left(){
    printf("Obrigado por ter usado o sistema!");
}