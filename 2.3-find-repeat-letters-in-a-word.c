#include<stdio.h>

int main(void) {
  int i;
  char palavra[51];

  scanf("%s",palavra);

  int l = 0;
  
  // conta as letras
  while(palavra[l]!='\0'){
    l++;
  }

  // põe a palavra em ordem alfabética
  for (int i=0; i<l-1; i++)
  {
    for (int j=i+1; j<l; j++)
    {
      if (palavra[i]>palavra[j])
      {
        char aux=palavra[i];
        palavra[i]=palavra[j];
        palavra[j]=aux;
      }
    }
  }

  int c=0,total=0;
  for(int i=0; i<l-1; i++)
  {
    if (palavra[i]==palavra[i+1])
      c++;
    else
      c=1;

    if (c==2)
      total++;

  }
  
  

  printf("%d\n",total);

	return 0;
}
