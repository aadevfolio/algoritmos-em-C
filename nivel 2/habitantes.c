#include <stdio.h>
#include <stdlib.h>

int main(){
    int habitantes, c, idade, maior=0, menor=200, f_quant=0, sexo;
    float salario, media;
    
    printf("Quantos habitantes: ");
    scanf("%d", &habitantes);
    
    for (c=1; c<=habitantes; c++){
        
        printf("Idade do %d habitante: ", c);
        scanf ("%d", &idade);
        printf("Sexo (1- Masculino / 2- Feminino): "); 
        scanf("%d", &sexo);
        printf("Salario: ");
        scanf("%f", &salario);
      
        if (sexo == 2 ){
          if (salario <=1000){
            f_quant = f_quant + 1; 
          }
        }
        
        media = media + salario; 
        
        if(idade > maior){
            maior = idade;
        } else if (idade < menor){
            menor = idade;
        } 
        
        system("clear\n");
    }
    
    printf("Media dos habitantes: %.2f\n", media/habitantes);
    printf("Maior idade: %d\n", maior);
    printf("Menor idade: %d\n", menor);
    printf("Quantidade de mulheres com salario até R$1.000: %d", f_quant);
    
    return 0;
}
