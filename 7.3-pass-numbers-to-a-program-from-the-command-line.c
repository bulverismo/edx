#include <stdio.h>
#include <stdlib.h> // for atoi and atof

int main(int argc, char *argv[]) {
  if (argc != 3)
    puts("Invalid input.");
  else
    printf("%s plants for %s dollars each cost %.2lf dollars.\n", argv[1], argv[2], atof(argv[1])*atof(argv[2]));
  return 0;
}


