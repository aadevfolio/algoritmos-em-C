#include <stdio.h>

void multiplicar (int x, int y);

int main(){
    // PARAMETROS FORMAIS E REAIS
    int num1, num2;

    scanf("%d", &num1);
    scanf("%d", &num2);
    multiplicar(num1, num2); // NUM1 e NUM2 são parametro reais, pois subtituem os parametros formais 
    return 0;
}

void multiplicar (int x, int y){
    // X e Y são parametros formais, pois são declarados juntos com o procedimento
    int resultado;

    resultado = x*y;
    printf("%d", resultado);
}