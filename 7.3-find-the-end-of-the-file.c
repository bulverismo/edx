#include <stdio.h>

int main(void) {
    FILE *ifile;  
    int N=0,flag=0;
    double number, primeiro;
    
    ifile = fopen("notas.txt", "r"); 

    N=0;

    fscanf(ifile, "%lf", &primeiro );
    N++;

    while (fscanf(ifile, "%lf", &number ) != EOF) {
        N++;
        if(primeiro<number )
        {
          flag=1;
          break;
        }
    }
    
    fclose(ifile);
    
    if (flag)
      printf("No %d\n",N);
    else
      printf("Yes\n");
    
    return(0);
}
