#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct student *append(struct student * end, struct student * newStudptr); 
/* add other prototypes here if needed */
void copyStr(char dest[],char ori[]);

int main(void) {
    struct student *start, *newStudptr, *end, *tmp;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);
    start = createStudent("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printf("%s is %d years old.\n", start->name, start->age);
    printf("%s is %d years old.\n", start->next->name, start->next->age);
    printf("%s is %d years old.\n", start->next->next->name, start->next->next->age);

    tmp = start->next;
    free(start);
    start = tmp;
    tmp = start->next;
    free(start);
    free(tmp);

    return 0;
}

/* Place your function definitions here. Be sure to include the definition for 
   createStudent() and any other functions you created for the previous task. */

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
