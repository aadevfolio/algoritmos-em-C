#include <stdio.h>

int main(){
    int n, c;
    
    printf("Tabuada: ");
    scanf("%d", &n);
    while (c <=10){
        printf("%d X %d = %d\n", n, c, n*c);
        c = c + 1;
    }
    
    return 0;
}
