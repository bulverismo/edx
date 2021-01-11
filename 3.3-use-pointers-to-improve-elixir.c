#include <stdio.h>

//Write your function prototype here
void modificar(int *);

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	//Write your function call here
  modificar(ageAddr);

	printf("Your new age will be %d!\n", age);
	return 0;
}


//Write your function here
void modificar(int *i)
{
  if (*i>21)
    *i-=10;
  else
    *i*=2;
}
