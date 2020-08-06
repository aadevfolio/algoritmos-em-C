#include <stdio.h>

int main(){
    int matriz[3] [3];
    int i, j;
    
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("Elemento [%d] [%d]: ", i+1, j+1);
            scanf ("%d", &matriz[i][j]);
        }
    }
    
    printf("\nMatriz\n");
    
    for (i=0; i<1; i++ ){
        for ( j=0; j<3; j++){
            printf ("%d ", matriz[i][j]);
        }
    }
    
    printf("\n");
    
    for (i=1; i<2; i++ ){
        for ( j=0; j<3; j++){
            printf ("%d ", matriz[i][j]);
        }
    }
    
    printf("\n");
    
    for (i=2; i<3; i++ ){
        for ( j=0; j<3; j++){
            printf ("%d ", matriz[i][j]);
        }
    }

    return 0;
}
