#include <stdio.h>

int main(){
	int idade;

  printf("Sua idade: ");
  scanf("%d", &idade);

  if (idade >= 18) {
    printf("você é maior de idade, então pode possuir uma CNH\n");
  } else {
	    printf("%d não é uma idade legal para possuir uma CNH. Volte mais Tarde!\n", idade);
  }

  if (idade % 2 == 0) {
			printf("Ahh, é sua idade é um número par");
  }	else {
			printf("Ahh, é sua idade é um número impar");
  }
	return 0;
}
