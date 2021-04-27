#include <stdio.h>
void incrementar(int *x);
int main(){
    // Passagem por referencia - tudo o que alterado no subprograma, também sera alterado na main

    int num = 15;
    incrementar(&num); // USA O & PARA DIZER QUE ESTA PASSANDO O ENDEREÇO DA VARIAVEL
    printf("Numero da Main: %d", num);
    return 0;
}

void incrementar(int *x){
    *x = *x + 1; // É PRECISO INCLUIR O * PARA INFORMAR QUE ESTA SENDO PASSADO TODO O CONTEUDO DA VARIAVEL
    printf("Numero do Subprograma: %d\n", *x);

}