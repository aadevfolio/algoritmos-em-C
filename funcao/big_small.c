#include <stdio.h>

void big_small (int a[5]);

int main (){
    int i, number[5];
    
    for (i=0; i<=4; i++){
        printf("Digite o %d° numero: ", i+1);
        scanf("%d", &number[i]);
    }
    
    big_small (number);
    return 0;
}

void big_small (int a[5]){
    int i, big=0, small=999999;
    
    for (i=0; i<=4; i++){
        if (a[i]> big){
            big = a[i];
        } else if (a[i] < small){
            small = a[i];
        }
    }

    printf("Maior numero: %d\n", big);
    printf("Menor numero: %d\n", small);

}
