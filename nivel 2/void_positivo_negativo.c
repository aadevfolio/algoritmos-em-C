#include <stdio.h>

void pos_neg(int x);

int main()
{
    int num;
    
    printf("Digite o número: ");
    scanf("%d", &num);
    pos_neg(num);
    
    return 0;
}

void pos_neg (int x){
    if (x >= 0){
        printf("Número positivo");
    } else 
        printf("Número negativo");

}

