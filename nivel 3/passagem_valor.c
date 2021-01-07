#include <stdio.h>

void convesor(float n);
int main(){
    // passagem por valor - o valor parametro só subtituido no subprograma, assim que retorna para o programa principal, o valor permanece inalterado

    float cm;
    printf("Centimetros: ");
    scanf("%f", &cm);
    convesor(cm); // Passagem por valor, sofre alterações dentro do subprograma, mas quando retorna para o programa, o valor não é alterado
    printf("Cm: %.2f", cm); 

    return 0; 
}

void convesor(float n){
    float resultado;
    resultado = n * 10;
    printf("Milimetros: %.2f\n", resultado);
}