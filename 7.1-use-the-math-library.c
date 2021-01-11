#include<stdio.h>
#include<math.h>

int main(void)
{
  double a;
  scanf("%lf",&a);
  printf("%.8f\n",sqrt(a));
  printf("%.10f\n",exp(1));
  printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra program.c -lm -o program\n");
  return 0;
}
