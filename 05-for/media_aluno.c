#include <stdio.h>

int main(){
    int alunos, cont, pior_aluno, melhor_aluno;
    float nota, media, tot_notas, maior=0, menor=10;
    
    printf("Alunos: ");
    scanf("%d", &alunos);
    for (cont = 1; cont <= alunos; cont++){
        printf("Nota do %d° aluno ", cont);
        scanf("%f", &nota);
        
        tot_notas = tot_notas + nota;
        
        if (nota > maior){
            maior = nota;
            melhor_aluno = cont;
        } else if (nota < menor){
            menor = nota;
            pior_aluno = cont;
        }
    }
    
    media = tot_notas/alunos;
    printf("Média da turma: %.2f\n", media);
    printf("Menor nota foi do %d° com %.2f\n", pior_aluno, menor);
    printf("Maior nota foi do %d° com %.2f\n", melhor_aluno, maior);
    return 0;
}
