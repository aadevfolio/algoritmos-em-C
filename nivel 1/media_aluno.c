#include <stdio.h>

int main (){
	float nota1, nota2, nota3, nota4, media;
		
  printf ("---------------------------------\n");
  printf ("APROVEITAMENTO E MÉDIA DO ALUNO\n");
  printf ("---------------------------------\n");
      
  printf ("1° nota: ");
  scanf ("%f", &nota1);
  printf ("2° nota: ");
  scanf ("%f", &nota2);
  printf ("3° nota: ");
  scanf ("%f", &nota3);
 	printf ("4° nota: ");
	scanf ("%f", &nota4);
  media = (nota1 + nota2 + nota3 + nota4) /4;
      
  printf ("---------------------------------\n");
	// saber a media e situação do aluno
	  if (media >= 7) {
	  printf ("Media: %.2f\n", media);
	  printf ("Situação: Aprovado(a)\n");
    } else if (media >= 5) {
	      printf ("Media: %.2f\n", media);
	      printf ("Situação: Recuperação\n");
    } else {
        printf ("Media: %.2f\n", media);
	      printf ("Situação: Reprovado(a)\n");
	  }

  // saber aproveitamento do aluno
    if (media >= 9) {
      printf ("Aproveitamento: SS\n");
    } else if ((media <= 8.9) && (media >= 7)) {
        printf ("Aproveitamento: MS\n");
    } else if ((media <= 6.9) && (media >= 5)) {
        printf ("Aproveitamento: MM\n");
    } else if ((media <= 4.9) && (media >=2)) {
        printf ("Aproveitamento: II\n");
    } else if (media <=2) {
       printf ("Aproveitamento: SR\n");
    }

  return 0;
}
