#include <stdio.h>
#include <stdlib.h>

void cadastro(float n, float tot_notas, float m_aluno);

int main(){
    float n, m_aluno, tot_notas=0;
    char resp;

    do {
      system("clear\n");
      printf("Cadastrar notas bimestrais\n");
      cadastro(n, tot_notas, m_aluno);
    
      printf("Quer cadastrar mais alunos [S/N]? ");
      getchar();
      scanf("%c", &resp);

    } while ((resp == 'S') || (resp == 's'));   
   
    printf("Saindo do programa...\n");
    exit(1);

    return 0;
}

void cadastro (float n, float tot_notas, float m_aluno){
    int i;
    for (i=1; i<=4; i++ ){
        printf ("%d° nota: ", i);
        scanf("%f", &n);
        tot_notas = tot_notas + n;
    }
    printf("Soma total das notas: %.2f\n", tot_notas);

    m_aluno = tot_notas/4;

    printf("Media das notas: %.2f\n", m_aluno);
    if (m_aluno >= 7){  
      printf("Aprovado!\n");
    } else if (m_aluno < 7){
        printf("Reprovado!\n");
    }
       
}


