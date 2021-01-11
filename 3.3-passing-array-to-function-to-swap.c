#include <stdio.h>

void reverseArray(int *);

int main(void)
{
  int arr[6];
  int i;

  for (i=0; i<6;i++)
    scanf("%d",&arr[i]);

  reverseArray(arr);

  for (i=0; i<6; i++)
    printf("%d ",arr[i]);

  return 0;
}

void reverseArray(int *arr)
{
  int a1 = *(arr+5);
  int a2 = *(arr+4);
  int a3 = *(arr+3);
  *(arr+3) = *(arr+2);
  *(arr+4) = *(arr+1);
  *(arr+5) = *(arr+0);
  *(arr+0) = a1;
  *(arr+1) = a2;
  *(arr+2) = a3;
}
