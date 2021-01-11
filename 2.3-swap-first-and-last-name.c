#include <stdio.h>

int main() {

  int contar=0;

  scanf("%d",&contar);

  for (int i=0; i<contar; i++)
  {
    char nome[101], sobrenome[101];
   
    scanf("%s %s",nome,sobrenome);

    printf("%s %s\n",sobrenome,nome);
  }

   return 0;
}
