#include <stdio.h>
#include <math.h>

int main(){
	float horas, bruto, inss, irenda, liquido, valor_item, imposto;
	int dependentes, funcionario, opcao, parcelas;
  float emprestimo, juros, novo_emprestimo, valor_final;
	
	printf("--------------------\n");
	printf("Sistema Financeiro\n");
	printf("--------------------\n");
	printf("Escolha uma opcao: \n");
	printf("1 - Informacoes Gerais do Funcionario\n");
	printf("2 - Taxa do Imposto\n");
	printf("3 - Emprestimo\n");
	scanf("%d", &opcao);
  printf("--------------------\n");
	
  if (opcao == 1){
    printf("Informações Gerais do Funcionario\n");
    printf("--------------------\n");
    printf("Numero de inscricao do funcionario: ");
    scanf("%d", &funcionario);
    printf("Quantidades de horas trabalhadas: ");
    scanf("%f", &horas);
    printf("Quantidade de dependentes: ");
    scanf("%d", &dependentes);

    bruto = (horas * 12) + (dependentes * 40);
    inss = (bruto * 8.5)/100;
    irenda = (bruto * 5)/100;
    liquido = bruto - (inss + irenda);
    
    printf("--------------------\n");
    printf("Inscricao do funcionario %d \n", funcionario);
    printf("Salario Bruto R$  %.2f \n", bruto);
    printf("Desconto INSS R$  %.2f \n", inss);
    printf("Desconto IR R$  %.2f \n", irenda);
    printf("salario Liquido R$ %.2f \n", liquido);
    }
  else if (opcao == 2){
    printf("Taxa do Imposto\n");
    printf("--------------------\n");
		printf("Valor do(a) produto (US$): ");
		scanf("%f", &valor_item);

		imposto = (valor_item * 60)/100;

		printf("A taxa de imposto será de US$: %.2f", imposto);
  }
  else if (opcao == 3){
    printf("Emprestismo\n");
    printf("--------------------\n");
    printf("Valor do emprestimo: ");
		scanf("%f", &emprestimo);

		juros = (emprestimo * 20) /100;
		novo_emprestimo = emprestimo + juros;

		printf("Quantas parcelas: ");
		scanf("%d", &parcelas);

		valor_final = novo_emprestimo / parcelas;

		printf("Você irá pagar parcelas de %.2f", valor_final);
  } else {
    printf("Comando Invalido!");
  }
	
	return 0;
}
