#include <stdio.h>

void incrementa (int n);
int main(){
    // passagem por valor - o valor parametro só subtituido no subprograma, assim que retorna para o programa principal, o valor permanece inalterado

    int num = 10;
    incrementa(num); // Passagem por valor, sofre alterações dentro do subprograma
    printf("Valor na Main: %d", num); // quando retorna para o programa, o valor não é alterado

    return 0; 
}

void incrementa (int n){
    n = n + 1;
    printf("Valor no Subprograma: %d\n", n);
}