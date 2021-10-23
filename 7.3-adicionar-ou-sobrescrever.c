#include <stdio.h>
#include <string.h>

int main(void) {
  FILE *arq;  /* Você pode user qualquer nome de variável aqui, apenas tenha
		  certeza de incluir o '*'. */
  char nomearquivo[] = "meu_primeiro_arquivo_de_saida.txt";
  int num, selecao;
  selecao = 1;
  
  /* Cheque se outra arquivo ja existe: */
  arq = fopen(nomearquivo, "r"); 
  if (arq != NULL) {
      printf("Você ja tem um arquivo com o nome %s.\n", nomearquivo);
      fclose(arq);
      printf("Do você quer (1) adicionar ou (2) sobrescrever? Digite 1 ou 2: \n");
      scanf("%d", &selecao);
  }

  if (selecao == 1) {
      arq = fopen(nomearquivo, "a"); 
  } else {
      arq = fopen(nomearquivo, "w"); 
  }
  
  do {
      printf("Por favor entre com a nota. Digite -1 para finalizar: \n");
      scanf("%d", &num);
      if (num != -1)
          fprintf(arq, "%d ", num);        
  } while (num != -1);
  fclose(arq);
  
  return 0;
}


