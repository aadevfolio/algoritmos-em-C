#include <stdio.h>

void resp_certa();
void resp_errada();

int main(){
    int opcao;
    printf("Escolha a alternativa correta: \n");
    printf("Quem inventou a lâmpada:\n");
    printf("1 - Thomas Edison\n");
    printf("2 - Isaac Newton\n");
    printf("3 - Albert Einstein\n");
    printf("4 - Benjamin Franklin\n");
    scanf("%d", &opcao);
    switch (opcao){
      case 1:
        resp_certa();
      break;
      case 2:
        resp_errada();
      break;
      case 3:
        resp_errada();
      break;
      case 4:
        resp_errada();
      break;
      default:
        printf("Comando Invalido!");
      break;
    } 
    return 0;
}

void resp_certa (){
  printf("Resposta Certa!");
}

void resp_errada (){
  printf("Resposta Errada!");
}
