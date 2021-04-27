#include <stdio.h>
#include <math.h>

int multiplicacao (int a, int b);
int potencia (int a, int b);

int main(){
    int num1, num2;
    
    printf("Digite 1° primairo: ");
    scanf("%d", &num1);
    printf("Digite 2° primairo: ");
    scanf("%d", &num2);
    multiplicacao (num1, num2);
    potencia(num1, num2);
    return 0;
}

int multiplicacao (int a, int b){
    int result;
    
    result = a*b;
    printf("A multiplicação de %d x %d é %d\n", a, b, result);
    return 0;
}

int potencia (int a, int b){
    int result;
    
    result = pow(a, b);
    printf("A potencia de base %d e expoente %d é %d\n", a, b, result);
    
    return 0;
}
