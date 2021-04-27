#include <stdio.h>
#include <stdlib.h>

// CONVERDOR DE DOLARES TEMPERATURA E VELOCIDADE
// BY: AADEVFOLIO

int main(){
	
	int opcao;
	float reais, dolares;
	float temp_f, temp_c;
	float km;
	
	printf("O que deseja converter: \n\n");
    printf("1 - Conversor de dolares\n");
    printf("2 - Conversor de temperatura\n");
    printf("3 - Conversor de velocidade\n")
    printf("4 - Sair\n\n");
	scanf("%d", &opcao);
	
	switch (opcao) {
        case 1:
            printf("Quantos R$ voce tem: ");
            scanf("%f", &reais);
            printf("Hoje, $1 dolar esta R$ 4,06.\n");	
            dolares = reais / 4.06;		
            printf("Entao, voce pode ter: $%.2f dolares\n", dolares);
            break;
        case 2:
            printf("Qual e a temperatura em Fahrenheit: ");
            scanf("%f", &temp_f);		
            printf("A temperatura em Celsius e %.1fC", (temp_f - 32) / 1.8);
            break;
        case 3:
            printf("Velocidade do veiculo (Km/H): ");
                    scanf("%f", &km);		
                    printf("Velocidade em M/s: %.2f", km/3.6);
            break;
        case 4:
            printf("Tchau!\n");
            exit(1);
            getchar();
        default:
            printf("Entrada invalida!\n");
        }
	
	return 0;
}

