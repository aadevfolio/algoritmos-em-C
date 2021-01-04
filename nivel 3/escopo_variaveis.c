#include <stdio.h>

void calcularDobro();

// VARIAVEL GLOBAL
int numero = 15;

int main (){
    printf("O valor do número é %d\n", numero);
    calcularDobro();
    return 0;
}

void calcularDobro(){
    // VARIAVEL LOCAL
    int dobro = numero *2;
    printf("e seu dobro é %d\n", dobro);
}