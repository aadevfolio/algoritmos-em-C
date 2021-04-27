#include <stdio.h>

void crescente (int a[5]);
void decrescente (int a[5]);


int main(){
   int i, num[5];

    for (i=0; i<=4; i++){
        printf("Digite o %d° numero: ", i+1);
        scanf("%d", &num[i]);
    }
    
    printf("Ordem crescente: ");
    crescente (num);
    printf("\nOrdem decrescente: ");
    decrescente (num);

    return 0;
}

void crescente (int a[5]){
    int i, j, aux;    
    
    for (i=0; i<=3; i++){
        for (j=i+1; j<=4; j++){
            if (a[i]>a[j]){
                aux=a[j];
                a[j]=a[i];
                a[i]=aux;
            }
        }
    }
    
    for(i=0; i<=4; i++){
        printf("%d ", a[i]);
    }
    
}

void decrescente (int a[5]){
    int i, j, aux;    
    
    for (i=0; i<=3; i++){
        for (j=i+1; j<=4; j++){
            if (a[i]<a[j]){
                aux=a[j];
                a[j]=a[i];
                a[i]=aux;
            }
        }
    }
    
    for(i=0; i<=4; i++){
        printf("%d ", a[i]);
    }
    
}
