#include <stdio.h>
#include <math.h>


int main(){
	int opcao;
	float raio, area, pi = 3.14;
	float base, altura;
	float comprimento, largura, volume;
	
	printf("O que deseja calcular: \n");
	printf("1 - Circunferencia\n");
	printf("2 - Area do circulo\n");
	printf("3 - Raio do circulo\n");
	printf("4 - Area do Triangulo\n");
	printf("5 - Volume da caixa \n");
	printf("6 - Volume da lata\n");
	printf("-----------------\n");
	scanf("%d", &opcao);
	printf("-----------------\n");
			
	if (opcao == 1){	
				
		printf("|Calculando a circunferencia|\n");
		printf("-----------------\n");
		printf("Digite o raio da circunferencia: ");
		scanf("%f", &raio);
		printf("A circunferencia e: %.2f\n", 2*pi*raio);	
		
	} else if (opcao == 2){
		printf("|Calculando a Area do circulo|\n");
		printf("-----------------\n");
		printf("Digite o raio da circunferencia: ");
		scanf("%f", &raio);
		area = pi*(raio*raio);
		printf("A area do circulo e: %.2f\n", area);
			
	} else if (opcao == 3){	
		printf("|Calculando o Raio do circulo|\n");
		printf("-----------------\n");
		printf("Digite a area da circunferencia: ");
		scanf("%f", &area);
		raio = sqrt(area/pi);
		printf("O raio do circulo e: %.2f\n", raio);
			
	} else  if (opcao == 4){
		printf("|Calculando a area do triangulo|\n");
		printf("-----------------\n");
		printf("Digite a base do triangulo: ");
		scanf("%f", &base);
		printf("Digite a altura do triangulo: ");
		scanf("%f", &altura);
	
		area = base*altura / 2;
		printf("A area do triangulo e: %.2f", area);
				
	} else if (opcao == 5){
		printf("|Calculando o volume da caixa|\n");
		printf("-----------------\n");
		printf("Digite o comprimento: ");
		scanf("%f", &comprimento);
		printf("Digite a altura: ");
		scanf("%f", &altura);
		printf("Digite a largura: ");
		scanf("%f", &largura);

		volume = comprimento*altura*largura;
		printf("O volume da caixa e: %.2f", volume);
		
	} else if (opcao == 6){
		printf("|Calculando o volume da lata|\n");
		printf("-----------------\n");
		printf("Digite o raio da lata: ");
		scanf("%f", &raio);
		printf("Digite a altura da lata: ");
		scanf("%f", &altura);
	
		volume = pi*(raio*raio)*altura;

		printf("O volume da lata e: %.2f", volume);
		
	} else {
		
		printf("Comando Invalido!");
	}
	
	return 0;
}

