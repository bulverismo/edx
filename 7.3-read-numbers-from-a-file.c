#include <stdio.h>

int main(void) {
  FILE *ifile;  /* ifile is a variable name - you could use any other name here. 
                   However, the '*' is important - we are working with a pointer. 
                   We call this a file pointer. */
  int i, num, N;
  double number;
  
  //ifile = fopen("my_first_file.txt", "r"); /* open file for reading. 
  ifile = fopen("my_second_file.txt", "r"); /* open file for reading. 
                                                   The "r" stands for reading. */
  
  fscanf(ifile, "%d", &N); /* Read first number from the file.
                              Just like scanf(), the only difference is the 
                              file pointer that gets passed in as well. */
                              
  printf("There are %d numbers in the file.\n", N);
  
  for (i = 0; i<N; i++) {
      fscanf(ifile, "%lf", &number);
      printf("I read %lf from the file. \n", number);
  }
  
  fclose(ifile); /* closes the file */
  
  return 0;
}
