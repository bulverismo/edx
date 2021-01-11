#include <stdio.h>
#include <string.h>

int main(void) {
  FILE *ofile;  /* You can use any variable name here, just make sure you 
                   include the '*'. */
  char filename[] = "myGrades.txt";
  int nota, entrada;
  
  scanf("%d",&entrada);

  ofile = fopen(filename, "r"); 

  while (fscanf(ofile, "%d", &nota ) != EOF){
    ;
  }

  if ( entrada != nota ) {
      ofile = fopen(filename, "a"); 
      fprintf(ofile, " %d", entrada);        
  }
  
  fclose(ofile);
  
  ofile = fopen(filename, "r"); 

  while (fscanf(ofile, "%d", &nota ) != EOF){
    printf("%d ",nota);
  }

  fclose(ofile);

  return 0;
}


