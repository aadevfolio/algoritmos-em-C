#include <stdio.h>

int main(){

  int opcao;
  float val_venda1, val_venda2, val_venda3, comissao1, comissao2, comissao3;
  int idade_atleta, kg_pesca, copias;

  printf("----- SISTEMA MATEMATICO FINACEIRO -----\n");
  printf("Digite a opção que deseja:\n");
  printf("1 - Relatório de vendas imobiliario\n");
  printf("2 - Classificação de atletas\n");
  printf("3 - Multa por pesca ilegal\n");
  printf("4 - Custo de impressão de copias\n");
  scanf("%d", &opcao);

  switch (opcao){
    case 1: 
      printf("----- Relatório de vendas imobiliario -----\n");
      printf("Valor de vendas mensal do 1° corretor: ");
      scanf("%f", &val_venda1);
      printf("--------------------\n");

      printf("Valor de vendas mensal do 2° corretor: ");
      scanf("%f", &val_venda2);
      printf("--------------------\n");

      printf("Valor de vendas mensal do 3° corretor:: ");
      scanf("%f", &val_venda3);
      printf("--------------------\n");

      if (val_venda1 > 50000){
          comissao1 = 12;
      } else if ((val_venda1 <= 50000) && (val_venda1 > 30000)){
          comissao1 = 9.5;
      } else if (val_venda1 <= 30000){
          comissao1 = 7;
      } 

      if (val_venda2 > 50000){
          comissao2 = 12;
      } else if ((val_venda2 <= 50000) && (val_venda2 > 30000)){
          comissao2 = 9.5;
      } else if (val_venda2 <= 30000){
          comissao2 = 7;
      } 

      if (val_venda3 > 50000){
          comissao3 = 12;
      } else if ((val_venda3 <= 50000) && (val_venda3 > 30000)){
          comissao3 = 9.5;
      } else if (val_venda3 <= 30000){
          comissao3 = 7;
      } 

      printf("Relatório de vendas imobiliario gerado com sucesso!\n");
      printf("Vendas por mês do 1° corretor: %.2f\n", val_venda1);
      printf("Comissão foi de %.2f = %.2f\n", comissao1, (val_venda1*comissao1)/100);
      printf("----------------------------\n");
      
      printf("Vendas por mês do 2° corretor: %.2f\n", val_venda2);
      printf("Comissão foi de %.2f = %.2f\n", comissao2, (val_venda2*comissao2)/100);
      printf("----------------------------\n");
      
      printf("Vendas por mês do 3° corretor: %.2f\n", val_venda3);
      printf("Comissão foi de %.2f = %.2f\n", comissao3, (val_venda3*comissao3)/100);
      printf("----------------------------\n");

      printf("Resultados total da empresa \n");
      printf("Vendas do mês: %.2f\n", val_venda1 + val_venda2 + val_venda3);

    break;
    case 2:
      printf("----- Classificação do Atleta -----\n");
      printf("Olá atleta! Qual sua idade: ");
      scanf("%d", &idade_atleta);
      
      if ((idade_atleta >= 5) && (idade_atleta < 10)) {
        printf("Classificação: Infantil");
      } else if ((idade_atleta >= 10) && (idade_atleta <= 17)){
        printf("Classificação: Juvenil");
      } else if (idade_atleta >= 18){
        printf("Classificação: Adulto");
      }
    break;
    case 3:
      printf("----- Multa por pesco ilegal -----\n");
      printf("Quantos kg você pescou: ");
      scanf("%d", &kg_pesca);

      if (kg_pesca > 50){
        printf("Você ultrapassou a quantidade de quilos estabelecida de 50kg por pessoa.\n");
        printf("Multa: 4 reais");
      } else if (kg_pesca <= 50){
        printf("Quantidade ok!");
      }
    break;
    case 4:
      printf("---- Custo de impressão de copias -----\n");   
      printf("Quantas copias você precisa: ");
      scanf("%d", &copias); 

      if (copias <= 100) {
        printf("Cada copia saiu R$ 0,25\n");
        printf("Valor total a ser pago: %.2f\n", copias * 0.25); 
      } else if (copias > 100) {
        printf("Cada copia saiu R$ 0,20\n");
        printf("Valor total a ser pago: %.2f\n", copias * 0.20); 
      }
    break;
  }

  return 0;
}
