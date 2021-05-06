#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Assinatura de Funções
void cad_funcio();
void menu();
void left();
void relatorio();
void relatorio_senior();

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
                relatorio();
                break;
            case 2:
                relatorio_senior();
                break;
            case 3:
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
        
        do {
            printf("Sexo: ");
            getchar();
            scanf("%c", &person[i].sexo);
            // validar campo sexo 
            if((person[i].sexo != 'f') && (person[i].sexo != 'm') && (person[i].sexo != 'F') && (person[i].sexo != 'M')){
                printf("-----------------\n");
                printf("Erro! Tente novamente!\n");
                printf("F - Feminino ou M - Masculino\n");
                printf("-----------------\n");
            }
        } while ((person[i].sexo != 'f') && (person[i].sexo != 'm') && (person[i].sexo != 'F') && (person[i].sexo != 'M'));
       
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
    printf("3 - Sair do programa\n");
}

void relatorio(){
    printf(" - Relatório Geral - \n");
    for (int i=0; i<5; i++){
        printf("Dados do funcionário %d\n", (i+1));
        getchar();
        printf("%s - %c - %d - %.2f\n", person[i].name, person[i].sexo, person[i].age, person[i].wage);
        printf("-----------------\n");
    }
}

void relatorio_senior(){
    /*
    printf(" - Relatório Senior - \n");
    for (int i=0; i<5; i++){
        if (person[i].age >= 35){
            printf("Dados do funcionário %d\n", (i+1));
            getchar();
            printf("%s - %c - %d - %.2f\n", person[i].name, person[i].sexo, person[i].age, person[i].wage);
            printf("-----------------\n");
        }   
    }*/
}

void left(){
    printf("Obrigado por ter usado o sistema!");
}