#include <stdio.h>

int par_impar (int a);
int fatorial (int a);

int main(){
    int num;
    
    printf("Digite o numero: ");
    scanf("%d", &num);
    par_impar(num);
    fatorial(num);
    
    return 0;
}

int par_impar (int a){
    if (a % 2 == 0){
        printf("%d é um numero par\n", a);
    } else 
        printf("%d é um numero impar\n", a);
    return 0;
}

int fatorial (int a){
    int i, fat=1;
    
    for (i=1; i<=a; i++){
        fat = fat * i;
    }
     printf("O fatorial de %d é %d", a, fat);
    return 0;
}
