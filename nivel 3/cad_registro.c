#include <stdio.h>
#include <stdlib.h>

// Assinatura de Funções
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
        }
    } while (opcao != 4);


    printf("Mes: ");
    scanf("%d", &funcioario.mes);
    for (i = 0; i <= 6; i++){
        printf("Horas dia %d: ", (i+1));
        scanf("%d", &funcioario.horas[i]); 
    }

    printf("--------------\n");
    printf("Mes: %d\n", funcioario.mes);
    for (i = 0; i <= 6; i++){
        printf("Horas dia %d: %d\n", (i+1), funcioario.horas[i]);
    }
}
  
void menu(){
    printf("-----------------\n");
    printf("1 - Relatório Geral\n");
    printf("1 - Relatório Senior\n");
    printf("3 - Buscar Funcionario\n");
    printf("4 - Sair do programa\n");
}

void left(){
    printf("Obrigado por ter usado o sistema!");
}