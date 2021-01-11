#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct student * append(struct student * end, struct student * newStudptr);
void printStudents(struct student *start);
void copyStr(char dest[],char ori[]);
void freeStudents(struct student *start);

int main(void) {
    struct student *start, *newStudptr, *end;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);

    start = createStudent("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printStudents(start);
    freeStudents(start);

    return 0;
}

/* Place your function definitions here. Be sure to include the definitions for 
   createStudent(), append(), printStudents() as well as any other functions you 
   created for the previous tasks. */

void freeStudents(struct student *start)
{
  struct student * ptr = start;
  struct student * tmp;

  while (ptr)
  {
    tmp = ptr->next;  
    free(ptr);
    ptr = tmp;
  }
}

void printStudents(struct student * start)
{
  struct student * ptr;
  
  ptr = start;

  while (ptr != NULL)
  {
    printf("%s is %d years old.\n",ptr->name,ptr->age);
    ptr = ptr->next;
  }

}

struct student * append(struct student * end, struct student * newStudptr)
{
  end->next = newStudptr;
  return newStudptr;
}

struct student * createStudent(char studentName[],int studentAge )
{
  struct student * ptr;

  ptr = (struct student*) malloc (sizeof (struct student));
  
  copyStr(ptr->name,studentName);
  ptr->age = studentAge;
  ptr->next = NULL; 

  return ptr;
}

void copyStr(char dest[],char ori[])
{
  int i=0;

  while(ori[i] != '\0')
  {
    dest[i] = ori[i];
    i++;
  }

  dest[i] = ori[i];

}
